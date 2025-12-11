
from PySide6.QtWidgets import (QMainWindow, QWidget, QVBoxLayout, QHBoxLayout,
                               QPushButton, QLabel, QProgressBar, QMessageBox,QFileDialog)
from Frontend.components.algorithm_select_widget import AlgorithmSelectWidget
from Frontend.components.text_input_widget import TextInputWidget
from Frontend.components.output_widget import OutputWidget
from Frontend.components.file_handle_widget import FileHandle
from Frontend.components.key_input import KeyInputWidget
from Frontend.components.encyption_decryption_handle import EncryptionDecryptionWidget

from Backend.api.key_generation  import generate_keys
from Backend.api.encryption import encrypt
from Backend.api.decryption import decrypt
import os

class MainWindow(QMainWindow):
    def __init__(self, app):
        super().__init__()
        self.setWindowTitle("Encryption & Decryption app")
        self.resize(800, 600)
        central = QWidget()
        self.setCentralWidget(central)
        layout = QVBoxLayout()
        central.setLayout(layout)
        self.input_path = self.key_path = self.output_path = None
        
        # text input
        self.text_input = TextInputWidget()
        layout.addWidget(self.text_input)
        
        # key input 
        self.key_input = KeyInputWidget()
        layout.addWidget(self.key_input)
        
        # algorithm selector
        self.alg_widget = AlgorithmSelectWidget()
        layout.addWidget(self.alg_widget)

        # file handle widget
        self.file_widget = FileHandle()
        layout.addWidget(self.file_widget)
        self.file_widget.on_file_upload(self.on_file_upload)
        self.file_widget.on_key_upload(self.on_key_upload)
        self.file_widget.on_generate_key_btn(self.on_generate_key_btn)
        self.file_widget.on_file_save(self.on_file_save)
        self.file_widget.on_key_save(self.on_key_save)
        # buttons row
        self.en_de_widget = EncryptionDecryptionWidget()
        layout.addWidget(self.en_de_widget)
        self.en_de_widget.on_encrypt_btn(self.on_encrypt_btn)
        self.en_de_widget.on_decrypt_btn(self.on_decrypt_btn)

        

        # progress & key display
        
        self.output_widget = OutputWidget()
        layout.addWidget(self.output_widget)
        self.output_widget.on_output_save(self.on_output_save)
        self.output_widget.on_switch_btn(self.on_switch_btn)
        
    def on_file_upload(self):
        path, _ = QFileDialog.getOpenFileName(
            None,
            "Select text file",
            filter="Text Files (*.txt);;All Files (*.*)"
        )
        try:
            with open(path, "r", encoding="utf-8") as f:
                content = f.read()
            self.input_path = path
            self.text_input.set_text(content)
        except Exception as e:
            QMessageBox.warning(None ,"Error", f"Failed to read file:\n{str(e)}")
            
    def on_key_upload(self):
        path, _ = QFileDialog.getOpenFileName(
            None,
            "Select text file",
            filter="Text Files (*.txt);;All Files (*.*)"
        )
        try:
            with open(path, "r", encoding="utf-8") as f:
                content = f.read()
            self.key_path = path
            self.key_input.set_key(content)
        except Exception as e:
            QMessageBox.warning(None ,"Error", f"Failed to read file:\n{str(e)}")
            
    def edit_file_in_place(self, path, new_text):
        with open(path, "w", encoding="utf-8") as f:
            f.write(new_text)
        QMessageBox.information( None,"File", "Saved")
            
    def save_text_to_new_file(self, text, parent=None):
        folder = QFileDialog.getExistingDirectory(parent, "Select folder to save the file")
        if not folder:
            QMessageBox.information( None,"File", "Not saved")
            return None

        file_name, ok = QFileDialog.getSaveFileName(
            parent,
            "Save Text File",
            os.path.join(folder, "new_file.txt"),
            "Text Files (*.txt)"
        )

        if not ok or not file_name:
            QMessageBox.information( None,"File", "Not saved")
            return None

        with open(file_name, "w", encoding="utf-8") as f:
            f.write(text)
        QMessageBox.information( None,"File", "Saved")
        return file_name

        
    def on_file_save(self):
        if self.input_path == None:
            path = self.save_text_to_new_file(self.text_input.get_text())
            if path != None: self.input_path = path
        else:
            self.edit_file_in_place(self.input_path, self.text_input.get_text())
            
    def on_generate_key_btn (self):
        key = generate_keys(self.alg_widget.combo.currentText())
        self.key_path = None
        self.key_input.set_key(key)
    
    def on_key_save(self):
        if self.key_path == None:
            path = self.save_text_to_new_file(self.key_input.get_key())
            if path != None: self.key_path = path
        else:
            self.edit_file_in_place(self.key_path, self.key_input.get_key())
    
    def on_encrypt_btn(self):
        out = encrypt(self.alg_widget.combo.currentText(), self.text_input.get_text(), self.key_input.get_key())
        self.output_widget.set_text(out)
    
    def on_decrypt_btn(self):
        out = decrypt(self.alg_widget.combo.currentText(), self.text_input.get_text(), self.key_input.get_key())
        self.output_widget.set_text(out)
    
    def on_output_save(self):
        self.save_text_to_new_file(self.output_widget.get_text())
    
    def on_switch_btn(self):
        temp = self.text_input.get_text()
        self.text_input.set_text(self.output_widget.get_text())
        self.output_widget.set_text(temp)
        self.input_path, self.output_path = self.output_path, self.input_path