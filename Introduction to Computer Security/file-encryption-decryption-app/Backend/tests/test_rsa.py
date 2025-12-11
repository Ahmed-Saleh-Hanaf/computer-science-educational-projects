import sys
import os
sys.path.append(os.path.dirname(os.path.dirname(__file__)))


from src.rsa_algorithm import *




plaintext = "Ahmed Saleh Hanafi\nage: 21"
ciphertext, P, Q = encrypt_file_rsa(plaintext)

print(ciphertext)
print(P, Q)
    
plaintext = decrypt_file_rsa(ciphertext, P,Q)
print(plaintext)



