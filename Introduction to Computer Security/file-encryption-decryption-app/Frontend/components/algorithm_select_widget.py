from PySide6.QtWidgets import QWidget, QHBoxLayout, QLabel, QComboBox

class AlgorithmSelectWidget(QWidget):
    def __init__(self, parent=None):
        super().__init__(parent)
        layout = QHBoxLayout()
        layout.addWidget(QLabel("Algorithm:"))
        self.combo = QComboBox()
        self.combo.addItems(['SDES','DES','RSA','DH','MD5','SHA1','DSS'])
        layout.addWidget(self.combo)
        self.setLayout(layout)

    def current(self):
        return self.combo.currentText()

    def set_on_change(self, callback):
        self.combo.currentIndexChanged.connect(lambda _: callback(self.current()))
