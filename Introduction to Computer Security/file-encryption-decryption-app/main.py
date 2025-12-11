from PySide6.QtWidgets import QApplication
from Frontend.main_window import MainWindow
import sys


def main():
    app = QApplication(sys.argv)
    window = MainWindow(app)
    window.show()
    sys.exit(app.exec())
    
if __name__ == "__main__":
    main()

#cd Introduction to Computer Security
#cd file-encryption-decryption-app
