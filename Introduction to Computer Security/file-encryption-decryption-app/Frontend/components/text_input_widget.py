from PySide6.QtWidgets import QWidget, QVBoxLayout, QLabel, QTextEdit

class TextInputWidget(QWidget):
    def __init__(self, placeholder="Type here..."):
        super().__init__()
        layout = QVBoxLayout()
        layout.addWidget(QLabel("Input"))
        self.textedit = QTextEdit()
        self.textedit.setPlaceholderText(placeholder)
        layout.addWidget(self.textedit)
        self.setLayout(layout)

    def get_text(self):
        return self.textedit.toPlainText()

    def set_text(self, s: str):
        self.textedit.setPlainText(s)

    
