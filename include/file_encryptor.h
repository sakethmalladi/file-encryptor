#ifndef FILE_ENCRYPTOR_H
#define FILE_ENCRYPTOR_H

#include <string>

class FileEncryptor {
public:
    FileEncryptor(char key);
    void encryptFile(const std::string& inputFilePath, const std::string& outputFilePath);
    void decryptFile(const std::string& inputFilePath, const std::string& outputFilePath);

private:
    char key;
    void processFile(const std::string& inputFilePath, const std::string& outputFilePath);
};

#endif // FILE_ENCRYPTOR_H
