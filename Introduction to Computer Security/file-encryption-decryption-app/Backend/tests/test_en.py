class SDES:
    def __init__(self, key10):
        # key10: string of 10 bits
        self.key10 = key10
        self.set_pc1()
        self.set_pc2()
        self.perm_key10 = self.permute(self.key10, self.PC1)
        self.subkeys8 = self.get_subkeys(self.PC2)  # [K1, K2]
        # message-related tables
        self.set_ip()
        self.set_fp()
        self.set_ex()
        self.set_sboxes()

    def set_pc1(self):
        self.PC1 = [3,5,2,7,4,10,1,9,8,6]

    def set_pc2(self):
        self.PC2 = [6,3,7,4,8,5,10,9]

    def set_ip(self):
        self.IP = [2,6,3,1,4,8,5,7]

    def set_fp(self):
        self.FP = [4,1,3,5,7,2,8,6]

    def set_ex(self):
        self.EX = [4,1,2,3,2,3,4,1]

    def set_sboxes(self):
        self.S_BOXES = [
            [
                [1,0,3,2],
                [3,2,1,0],
                [0,2,1,3],
                [3,1,3,2]
            ],
            [
                [0,1,2,3],
                [2,0,1,3],
                [3,0,1,0],
                [2,1,0,3]
            ]
        ]

    def permute(self, bits, pattern):
        return ''.join(bits[idx-1] for idx in pattern)

    def left_shift(self, bits, n_shift):
        return bits[n_shift:] + bits[:n_shift]

    def get_subkeys(self, permuted_choice):
        L = self.perm_key10[:5]
        R = self.perm_key10[5:]
        ROTATIONS = [1, 2]
        subkeys = []
        for idx in range(2):
            L = self.left_shift(L, ROTATIONS[idx])
            R = self.left_shift(R, ROTATIONS[idx])
            subkey = self.permute(L + R, permuted_choice)
            subkeys.append(subkey)
        return subkeys  

    def do_expansion(self, bits4):
        return self.permute(bits4, self.EX)

    def do_sbox(self, bits4, sbox_index):
        row = int(bits4[0] + bits4[3], 2)
        col = int(bits4[1:3], 2)
        val = self.S_BOXES[sbox_index][row][col]
        return format(val, "02b")

    def make_xor(self, bits1, bits2):
        return ''.join('1' if b1 != b2 else '0' for b1, b2 in zip(bits1, bits2))

    def mangler_fun(self, bits4, key8):
        expanded = self.do_expansion(bits4)           
        xored8 = self.make_xor(expanded, key8)       
        left4 = xored8[:4]
        right4 = xored8[4:]
        s0_out = self.do_sbox(left4, 0)   
        s1_out = self.do_sbox(right4, 1)  
        after_sbox4 = s0_out + s1_out    
        P4 = [2,4,3,1]
        return self.permute(after_sbox4, P4)  

    def encrypt(self, bits8):
        bits8 = self.permute(bits8, self.IP)
        L4 = bits8[:4]
        R4 = bits8[4:]
        for idx in range(2):
            L_new = R4
            R_new = self.make_xor(L4, self.mangler_fun(R4, self.subkeys8[idx]))
            L4, R4 = L_new, R_new
        preoutput = R4 + L4
        cipher_text = self.permute(preoutput, self.FP)
        return cipher_text
    
    def decrypt(self, bits8):
        bits8 = self.permute(bits8, self.IP)
        L4 = bits8[:4]
        R4 = bits8[4:]
        for idx in range(2):
            L_new = R4
            R_new = self.make_xor(L4, self.mangler_fun(R4, self.subkeys8[1 - idx]))
            L4, R4 = L_new, R_new
        preoutput = R4 + L4
        plain_text = self.permute(preoutput, self.FP)
        return plain_text