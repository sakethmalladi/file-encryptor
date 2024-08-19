#include "file_encryptor.h"
#include <fstream>
#include <iostream>

FileEncryptor::FileEncryptor(char key) : key(key) {}

void FileEncryptor::processFile(const std::string& inputFilePath, const std::string& outputFilePath) {
    std::ifstream inputFile(inputFilePath, std::ios::binary);
    std::ofstream outputFile(outputFilePath, std::ios::binary);

    if (!inputFile || !outputFile) {
        std::cerr << "Error opening file." << std::endl;
        return;
    }

    char buffer;
    while (inputFile.get(buffer)) {
        outputFile.put(buffer ^ key); // XOR encryption/decryption
    }

    inputFile.close();
    outputFile.close();
}

void FileEncryptor::encryptFile(const std::string& inputFilePath, const std::string& outputFilePath) {
    processFile(inputFilePath, outputFilePath);
}

void FileEncryptor::decryptFile(const std::string& inputFilePath, const std::string& outputFilePath) {
    processFile(inputFilePath, outputFilePath);
}
