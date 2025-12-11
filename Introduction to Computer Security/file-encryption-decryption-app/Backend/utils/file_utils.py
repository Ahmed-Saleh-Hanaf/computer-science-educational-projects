import sys
import os
sys.path.append(os.path.dirname(os.path.dirname(__file__)))

from algorithms.sdes import SDES
from algorithms.des import DES
from algorithms.rsa import RSA
from . import converters, padding


def encrypt_file_sdes(plaintext, key):
    sdes = SDES(key)

    bits = converters.text_to_binary(plaintext)
    bits = padding.pad_to_bits(bits, 8)

    blocks = [bits[i:i+8] for i in range(0, len(bits), 8)]

    encrypted_blocks = []

    for block in blocks:
        encrypted_blocks.append(sdes.encrypt(block))

    cipher_text = ''.join(encrypted_blocks)
    cipher_text = converters.binary_to_text(cipher_text)
    return cipher_text

def decrypt_file_sdes(cipher_text, key):
    sdes = SDES(key)

    bits = converters.text_to_binary(cipher_text)
    bits = padding.pad_to_bits(bits,8)

    blocks = [bits[i:i+8] for i in range(0, len(bits), 8)]

    decrypted_blocks = []

    for block in blocks:
        decrypted_blocks.append(sdes.decrypt(block))

    plaintext = ''.join(decrypted_blocks)
    plaintext = converters.binary_to_text(plaintext)
    return plaintext


def encrypt_file_des(plaintext, key):
    
    des = DES(key)

    bits = converters.text_to_binary(plaintext)
    bits = padding.pad_to_bits(bits, 64)

    blocks = [bits[i:i+64] for i in range(0, len(bits), 64)]

    encrypted_blocks = []

    for block in blocks:
        encrypted_blocks.append(des.encrypt(block))

    cipher_text = ''.join(encrypted_blocks)
    cipher_text = converters.binary_to_text(cipher_text)
    return cipher_text

def decrypt_file_des(cipher_text, key):
    des = DES(key)

    bits = converters.text_to_binary(cipher_text)
    bits = padding.pad_to_bits(bits, 64)

    blocks = [bits[i:i+64] for i in range(0, len(bits), 64)]

    decrypted_blocks = []

    for block in blocks:
        decrypted_blocks.append(des.decrypt(block))

    plaintext = ''.join(decrypted_blocks)
    plaintext = converters.binary_to_text(plaintext)
    return plaintext


def encrypt_file_rsa(plaintext, P,Q):
    rsa = RSA(P,Q)
    cipher_text = ' '.join(str(rsa.encrypt(ch)) for ch in plaintext)
    return cipher_text

def decrypt_file_rsa(cipher_text, P, Q):
    rsa = RSA(P,Q)
    plaintext = ''.join( rsa.decrypt(int(num)) for num in cipher_text.split())
    return plaintext