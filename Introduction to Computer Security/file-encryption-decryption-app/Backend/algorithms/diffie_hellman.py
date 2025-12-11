
import random
class DiffiHellman:
    def __init__(self, P, G, private = None):
        self.P , self.G = P , G
        self.private = random.randint(2, self.P-2) if private == None else private
        self.public = pow(self.G,self.private,self.P)
    
    def compute_shared_key (self, other_public):
        return pow(other_public, self.private, self.P)
    

        
    

        
    