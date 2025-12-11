

from PySide6.QtWidgets import QWidget, QHBoxLayout, QPushButton, QLabel, QFileDialog

class EncryptionDecryptionWidget(QWidget):
    def __init__(self):
        super().__init__()
        layout = QHBoxLayout()
        self.encrypt_btn = QPushButton("Encrypt (Text)")
        self.decrypt_btn = QPushButton("Decrypt (Text)")

        layout.addWidget(self.encrypt_btn )
        layout.addWidget(self.decrypt_btn)
        
        self.setLayout(layout)


    def on_encrypt_btn(self, callback):
        self.encrypt_btn.clicked.connect(callback)

    def on_decrypt_btn(self, callback):
        self.decrypt_btn.clicked.connect(callback)
    

