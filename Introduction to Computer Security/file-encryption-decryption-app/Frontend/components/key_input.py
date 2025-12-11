# ui/components/key_input_widget.py
from PySide6.QtWidgets import QWidget, QHBoxLayout, QLabel, QLineEdit, QPushButton, QFileDialog

class KeyInputWidget(QWidget):
    def __init__(self, label="Key ", placeholder="Enter key here..."):
        super().__init__()
        layout = QHBoxLayout()
        self.label = QLabel(label)
        layout.addWidget(self.label)
        self.textbox = QLineEdit()
        self.textbox.setPlaceholderText(placeholder)
        layout.addWidget(self.textbox)

        self.setLayout(layout)

    def get_key(self):
        return self.textbox.text()

    def set_key(self, key: str):
        self.textbox.setText(key)

    

    
