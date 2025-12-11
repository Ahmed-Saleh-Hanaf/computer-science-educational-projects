import random

def is_prime (num):
        if num < 2 : return False
        for i in range(2, int(num**0.5)+1):
            if num % i == 0 : return False
        return True
    
def get_rand_prime(bits):
    while True:
        num = random.getrandbits(bits)
        if is_prime(num): return num