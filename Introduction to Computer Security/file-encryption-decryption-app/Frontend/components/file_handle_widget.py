from PySide6.QtWidgets import QWidget, QHBoxLayout, QPushButton, QLabel, QFileDialog

class FileHandle(QWidget):
    def __init__(self):
        super().__init__()
        layout = QHBoxLayout()
        self.upload_file_btn = QPushButton("Upload File")
        self.upload_key_btn = QPushButton("Upload Key")
        self.generate_key_btn = QPushButton("Generate Key")
        self.save_file_btn = QPushButton("Save File")
        self.save_key_btn = QPushButton("Save Key")

        layout.addWidget(self.upload_file_btn)
        layout.addWidget(self.upload_key_btn)
        layout.addWidget(self.generate_key_btn)
        layout.addWidget(self.save_file_btn)
        layout.addWidget(self.save_key_btn)
        
        self.setLayout(layout)


    def on_file_upload(self, callback):
        self.upload_file_btn.clicked.connect(callback)

    def on_key_upload(self, callback):
        self.upload_key_btn.clicked.connect(callback)
        
    def on_file_save(self, callback):
        self.save_file_btn.clicked.connect(callback)

    def on_key_save(self, callback):
        self.save_key_btn.clicked.connect(callback)
        
    def on_generate_key_btn(self, callback):
        self.generate_key_btn.clicked.connect(callback)
    
