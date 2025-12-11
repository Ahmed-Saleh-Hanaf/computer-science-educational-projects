# RSA algorithm is asymmetric cryptography
# A client (for example browser) sends its public key to the server
# and requests some data.
# • The server encrypts the data using the client’s public key and
# sends the encrypted data.
# • The client receives this data and decrypts it. 
import random
import math
from Backend.utils.prime_utils import get_rand_prime
class RSA :
    def __init__ (self, P = None, Q= None):
        if P != None and Q != None:
            self.P = P
            self.Q = Q
        else:
            self.P = get_rand_prime(10)
            self.Q = get_rand_prime(10)
        self.N = self.euler = self.E = self.D = None
        self.set_public_key()
        self.set_private_key()
        
    
    def gcd(self, a, b):
        while b:
            a, b =b, a%b
        return a
    
    def find_e (self, phi):
        for e in range (2,phi):
            if self.gcd(e, phi) == 1 : return e
        
    def set_public_key (self):
        self.N = self.P * self.Q
        self.euler = (self.P-1) * (self.Q-1)
        self.E = self.find_e(self.euler)
        # public key  e, n
        
    def set_private_key(self):
        for i in range(1,self.euler):
            if (i*self.E) % self.euler == 1:
                self.D = i 
                break
        # d, n

    def encrypt (self, char):
        m = ord(char)
        return ((m ** self.E) % self.N)
    
    def decrypt (self, num):
        return chr((num**self.D) % self.N)
        
        





