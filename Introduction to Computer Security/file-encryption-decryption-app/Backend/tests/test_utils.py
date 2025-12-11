import sys
import os
sys.path.append(os.path.dirname(os.path.dirname(__file__)))

from src import utils

key = utils.generate_hex_key(16)
print(key)
bkey = utils.hex_to_binary(key)
print(bkey)


text = utils.text_to_binary("ahmed ")
print(text)