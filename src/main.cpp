#include "file_encryptor.h"
#include <iostream>

int main() {
    char key = 'K'; // Simple key for XOR encryption/decryption
    FileEncryptor encryptor(key);

    std::string inputFilePath = "../data/input.txt";
    std::string encryptedFilePath = "../data/encrypted.bin";
    std::string decryptedFilePath = "../data/decrypted.txt";

    encryptor.encryptFile(inputFilePath, encryptedFilePath);
    std::cout << "File encrypted successfully." << std::endl;

    encryptor.decryptFile(encryptedFilePath, decryptedFilePath);
    std::cout << "File decrypted successfully." << std::endl;

    return 0;
}
