//
// Created by Nick Polizogopoulos on 28/7/25.
//

#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <iostream>

class FileWriter {
public:
    FileWriter(std::string fileName) {
        std::cout << "Constructor of FileWriter" << std::endl;
    }

    std::string fileName() {
        return "filename";
    }

    void write(std::string content) {
        std::cout << content << std::endl;
    }
};

#endif //FILEWRITER_H
