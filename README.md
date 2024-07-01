## **Documentation**

### **Overview**
This program allows users to encrypt and decrypt messages using a Caesar cipher. The Caesar cipher is a type of substitution cipher where each letter in the plaintext is shifted a certain number of places down the alphabet. The program provides a user-friendly interface to either encrypt or decrypt messages by entering a shift key.

### **Functions**

#### **`std::string encrypt(std::string text, int key)`**
Encrypts a given message by shifting each letter by a specified key value.

- **Parameters:**
  - `text`: The plaintext message to be encrypted.
  - `key`: The integer value by which each character in the message is shifted.
  
- **Returns:**
  - `std::string`: The encrypted message.

- **Details:**
  - If the character is a space, it remains unchanged.
  - If the character is uppercase, it is shifted within the range of uppercase letters.
  - If the character is lowercase, it is shifted within the range of lowercase letters.
  - The shifting is done using modular arithmetic to wrap around the alphabet.

#### **`std::string decrypt(std::string text, int key)`**
Decrypts a given message by shifting each letter back by a specified key value.

- **Parameters:**
  - `text`: The encrypted message to be decrypted.
  - `key`: The integer value by which each character in the message is shifted back.

- **Returns:**
  - `std::string`: The decrypted message.

- **Details:**
  - The decryption function calls the `encrypt` function with a negative key value to reverse the shift.

### **Main Function**
- **`int main()`**
  - Provides a simple command-line interface for users to choose between encrypting a message, decrypting a cipher, or exiting the program.
  - It takes input from the user for the message and the shift key value.
  - The program handles invalid input gracefully by prompting the user to enter valid input.

### **Usage Instructions**
1. **Compile the Program:**
   Use a C++ compiler to compile the program. For example, with `g++`:

   ```bash
   g++ -o caesar_cipher caesar_cipher.cpp
   ```

2. **Run the Program:**
   Execute the compiled program:

   ```bash
   ./caesar_cipher
   ```

3. **Choose an Option:**
   - Enter `1` to encrypt a message.
   - Enter `2` to decrypt a cipher.
   - Enter `0` to exit the program.

4. **Follow the Prompts:**
   - For encryption, input the message and shift key when prompted.
   - For decryption, input the cipher and shift key when prompted.

5. **View Results:**
   The encrypted or decrypted message will be displayed on the screen.

### **Example**
```plaintext
Enter the option
1.Encrypt the Message
2.Decrypt the Cipher
0.To Exit the program
1
Enter the Message to be Encrypted:hello world
Enter the Shift Key Value:3
khoor zruog
```