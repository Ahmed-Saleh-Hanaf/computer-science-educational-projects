from PySide6.QtWidgets import QWidget, QVBoxLayout, QLabel, QTextEdit, QPushButton, QHBoxLayout, QFileDialog

class OutputWidget(QWidget):
    def __init__(self):
        super().__init__()
        layout = QVBoxLayout()
        layout.addWidget(QLabel("Ciphertext"))
        self.output = QTextEdit()
        self.output.setReadOnly(True)
        layout.addWidget(self.output)

        btn_row = QHBoxLayout()
        self.save_btn = QPushButton("Save")
        self.switch_btn = QPushButton("Switch (input with output)")
        self.clear_btn = QPushButton("Clear")
        btn_row.addWidget(self.save_btn)
        btn_row.addWidget(self.switch_btn)
        btn_row.addWidget(self.clear_btn)
        layout.addLayout(btn_row)

        
        self.clear_btn.clicked.connect(self.output.clear)
        self.setLayout(layout)

    def get_text(self):
        return self.output.toPlainText()

    def set_text(self, s: str):
        self.output.setPlainText(s)
    
    def on_output_save(self, callback):
        self.save_btn.clicked.connect(callback)
    
    def on_switch_btn(self, callback):
        self.switch_btn.clicked.connect(callback)
    
    
