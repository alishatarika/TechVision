#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Writing to a text file
    std::ofstream outputFile("example.txt");

    if (outputFile.is_open()) {
        outputFile << "Hello, this is a text file example." << std::endl;
        outputFile << "We can write multiple lines to this file." << std::endl;
        outputFile << "This is the last line." << std::endl;
        outputFile.close();
        std::cout << "Text file 'example.txt' has been written." << std::endl;
    } else {
        std::cerr << "Unable to open the file for writing." << std::endl;
        return 1;
    }

    // Reading from the same text file
    std::ifstream inputFile("example.txt");

    if (inputFile.is_open()) {
        std::string line;
        std::cout << "Contents of 'example.txt':" << std::endl;
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    } else {
        std::cerr << "Unable to open the file for reading." << std::endl;
        return 1;
    }

    return 0;
}
