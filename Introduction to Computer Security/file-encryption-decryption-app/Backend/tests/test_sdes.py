import sys
import os
sys.path.append(os.path.dirname(os.path.dirname(__file__)))


from utils import file_utils, key_generation
key = key_generation.generate_key(10)
plaintext = "Ahmed Saleh Hanafi\nage: 21"
ciphertex = file_utils.encrypt_file_sdes(plaintext, key)

print(ciphertex)
print(key)
    
plaintext = file_utils.decrypt_file_sdes(ciphertex, key)
print(plaintext)



