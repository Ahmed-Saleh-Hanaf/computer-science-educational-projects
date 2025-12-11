

from Backend.utils.file_utils import encrypt_file_sdes, encrypt_file_des, encrypt_file_rsa
from Backend.utils.converters import hex_to_binary
def encrypt(algo_type, plaintext, key):
    #[,'DES',,'DH','MD5','SHA1','DSS']
    if algo_type == 'SDES':
        return encrypt_file_sdes(plaintext, key)
    elif algo_type == 'DES':
        return encrypt_file_des(plaintext, hex_to_binary(key))
    elif algo_type == 'RSA':
        key = key.split()
        P, Q = int(key[1]), int(key[3])
        return encrypt_file_rsa(plaintext,P,Q)
    elif algo_type == 'DH':
        return """The Diffie–Hellman (DH) Algorithm is a key-exchange protocol that enables
two parties communicating over public channel to establish a mutual secret
without it being transmitted over the Internet."""
    
    
