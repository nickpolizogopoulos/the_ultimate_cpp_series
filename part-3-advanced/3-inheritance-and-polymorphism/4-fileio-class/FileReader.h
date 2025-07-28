//
// Created by Nick Polizogopoulos on 28/7/25.
//

#ifndef FILEREADER_H
#define FILEREADER_H

#include <iostream>

class FileReader {
public:
    FileReader(std::string fileName) {
        std::cout << "Constructor of FileReader" << std::endl;
    }

    std::string fileName() {
        return "filename";
    }

    std::string read() {
        return "Reading from file.";
    }
};

#endif //FILEREADER_H
