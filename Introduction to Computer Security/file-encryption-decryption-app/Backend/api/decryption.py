
from Backend.utils.file_utils import decrypt_file_sdes, decrypt_file_des, decrypt_file_rsa
from Backend.utils.converters import hex_to_binary

def decrypt(algo_type, ciphertext, key):
    #[,,'RSA','DH','MD5','SHA1','DSS']
    if algo_type == 'SDES':
        return decrypt_file_sdes(ciphertext, key)
    elif algo_type == 'DES':
        return decrypt_file_des(ciphertext, hex_to_binary(key))
    elif algo_type == 'RSA':
        key = key.split()
        P, Q = int(key[1]), int(key[3])
        return decrypt_file_rsa(ciphertext, P,Q)
    elif algo_type == 'DH':
        return """The Diffie–Hellman (DH) Algorithm is a key-exchange protocol that enables
two parties communicating over public channel to establish a mutual secret
without it being transmitted over the Internet."""