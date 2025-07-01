//
// Created by Nick Polizogopoulos on 1/7/25.
//
#include <iostream>
#include <fstream>
#include "streams_and_files.h"

// Read data from the file created in the previous exercise (2_writing_to_files.cpp)
// and print all movies to the console

struct Movie {
    int id;
    std::string title;
    int year;
};

void readingFromFiles() {

    std::cout << "Exercise: Reading from Files" << std::endl << "=======================================" << std::endl;

    std::ifstream file;
    file.open("movies.csv");

    if (file.is_open()) {

        std::string str;
        getline(file, str);

        std::cout << "My list of movies:" << std::endl;

        while (!file.eof()) {
            Movie movie;

            getline(file, str, ',');

            if (str.empty())
                continue;

            movie.id = std::stoi(str);

            getline(file, str, ',');
            movie.title = str;

            getline(file, str);
            movie.year = std::stoi(str);

            std::cout
                << movie.id << ". " << movie.title << " - " << movie.year << std::endl;
        }

        file.close();
    }

    std::cout << std::endl << std::endl;
}