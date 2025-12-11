
import random
class DiffiHellman:
    def __init__(self, P, G):
        self.P , self.G = P , G
        self.private = random.randint(2, self.P-2)
        self.public = pow(self.G,self.private_key,self.P)

    def get_bublic_key (self):
        return self.public
    
    def compute_shared_key (self, other_public):
        return pow(other_public, self.private, self.P)
    

        
    

        
    