//
// Created by Nick Polizogopoulos on 28/7/25.
//

#ifndef FILEIO_H
#define FILEIO_H

#include "FileReader.h"
#include "FileWriter.h"

class FileIO : public FileReader, public FileWriter {
public:
    FileIO(std::string fileName) : FileReader(fileName), FileWriter(fileName) {}
};

#endif //FILEIO_H
