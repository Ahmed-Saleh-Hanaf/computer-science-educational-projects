

def pad_to_bits(bits, num):
    if len(bits) % num != 0:
        bits += "0" * (num - (len(bits) % num))
    return bits