import sys
import os
sys.path.append(os.path.dirname(os.path.dirname(__file__)))


from src.des_algorithm import DES, encrypt_file_des, decrypt_file_des
from src.utils import hex_to_binary, binary_to_hex


key = "133457799BBCDFF1"
key = hex_to_binary(key)
obj = DES(key)

plaintext = hex_to_binary("0123456789ABCDEF")

ciphertext = obj.encrypt(plaintext)

ciphertext = binary_to_hex(ciphertext)

if ciphertext == "85E813540F0AB405":
    print ("Is correct")
else :
    print ("Is no correct")


plaintext = "Ahmed Saleh Hanafi\nage: 21\nToday is not tomorrow "
ciphertext, key = encrypt_file_des(plaintext)

print(ciphertext)
print(key)
    
plaintext = decrypt_file_des(ciphertext, key)
print(plaintext)



