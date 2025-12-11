"""
## Main Window
1- Creating -> mainwindow = QMainWindow()
2- set fun -> obj.setCentralWidget()
3- obj.menuBar() has addMenu('&') -> addAction('') -> triggered.connect(fun)

## Window
1- Creating -> window = QWidget()
2- set fun -> obj.setWindowTitle(''), obj.setLayout(layout)

## Button
1- creating  -> button = QPushButton()
2- set fun -> obj.setText() obj.setCheckable(True) 
3- signals -> obj.clicked.connect(slot_fun) 

## Signals -> event and each component has its signals
## Slot -> fun that respond when something happens

# layout
1- create -> obj = QBoxLayout()
2- add component -> obj.addWidget(w)
"""


# Plaintext   : the original message.
# Cipher-text : the unintelligible message form.
# Secret key  : info used to control the cipher system, known only to sender& receiver
# Cipher      : the algorithm used for transforming plaintext to cipher-text under control of a secret key.
# Encryption  : converting plaintext to cipher-text
# Decryption  : process that transforms encrypted information into its original format.
# Cryptography: study of encryption principles & methods


## Types of cryptography
# 1)Symmetrical (secret-key): where the same secret key is used for both encryption and decrption
#     1)Stream ciphers system: operate on a single bit (byte or computer word) at a time
#     2)Block Cipher system  : operate on  a block of text

# 2)Asymmetrical (public-key):  that uses a pair of keys for secure communication a public key and a private key.

# 3)Hash function : mathematical function that can be used to map data of arbitrary size to fixedsize values. 