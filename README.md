# CS405

Fure Improvements, pseudocode:
START  

Class EncryptionTool:  

Members:  

string student_name  

string key  

string input_file  

string encrypted_file  

string decrypted_file 

 

Methods: 
    read_input_file() 
    encrypt_data() 
    decrypt_data() 
    save_to_file(filename, data) 
    get_current_date() 
  

MAIN FUNCTION:  

Prompt user for:  

- Input file name  

- Encryption key  

Create EncryptionTool object with inputs  

Call read_input_file()  

Call encrypt_data() and save to encrypted file  

Call decrypt_data() and save to decrypted file  

Display success message with file names  

END 
