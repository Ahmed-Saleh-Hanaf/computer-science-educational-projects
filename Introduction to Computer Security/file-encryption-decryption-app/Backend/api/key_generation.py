
from Backend.utils.key_generation import generate_key
from Backend.utils.converters import binary_to_hex
from Backend.utils.prime_utils import get_rand_prime
from Backend.algorithms.diffie_hellman import DiffiHellman
from sympy import randprime, primitive_root

def generate_keys (algo_type):
    #[,'MD5','SHA1','DSS']
    if algo_type == 'SDES':
        return generate_key(10)
    elif algo_type == 'DES':
        return binary_to_hex(generate_key(64))
    elif algo_type == 'RSA':
        return 'P= ' + str(get_rand_prime(10)) + ' Q= '+ str( get_rand_prime(10))
    elif algo_type == 'DH':
        p = randprime(1000, 5000)
        g = primitive_root(p)
        user1 = DiffiHellman(p,g)
        user2 = DiffiHellman(p,g)
        shared = user1.compute_shared_key(user2.public)
        return 'P= ' + str(p) + ' G= '+ str( g) + '  user1( public-> '+ str(user1.public) + '  private-> ' + str(user1.private) + ' ) user2( public->  '+ str(user2.public) + ' private-> ' + str(user2.private) + ' )   ' + 'SharedKey  '+ str(shared) 
        
    