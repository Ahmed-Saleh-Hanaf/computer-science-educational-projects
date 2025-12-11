
from random import choice

def generate_key (n_bits):
    bin = "01"
    return ''.join(choice(bin) for _ in range(n_bits))
