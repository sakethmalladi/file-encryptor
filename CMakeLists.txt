cmake_minimum_required(VERSION 3.10)
project(FileEncryptionProject)

set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(include)

# Add source files
add_executable(file_encryptor src/main.cpp src/file_encryptor.cpp)
