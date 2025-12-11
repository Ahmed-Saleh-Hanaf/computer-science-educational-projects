import random


def hex_to_binary(hex_string):
    binary = ""
    for digit in hex_string:
        binary += format(int(digit, 16), "04b")   
    return binary

def binary_to_hex(binary_str):
    return hex(int(binary_str, 2))[2:].upper()

def text_to_binary(text):
    return ''.join(format(ord(c), "08b") for c in text)

def binary_to_text(bits):
    text = ""
    for i in range(0, len(bits), 8):
        byte = bits[i:i+8]
        text += chr(int(byte, 2))
    return text

