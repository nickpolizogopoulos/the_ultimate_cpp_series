//
// Created by Nick Polizogopoulos on 30/6/25.
//
#include <iostream>
#include <fstream>
#include "streams_and_files.h"

// Create a simple .csv file with movies.

struct Movie {
    std::string title;
    int year;
};

void writingToFiles() {

    std::cout << "Exercise: Writing to Files" << std::endl << "=======================================" << std::endl;

    std::ofstream file;
    file.open("movies.csv");

    // C style array OR std::vector<Movie> movies = { ... };
    Movie movies[] = {
        {"A Knight's Tale", 2001},
        {"The Pianist", 2002},
        {"V for Vendetta", 2006},
        {"Inception", 2010},
        {"The Imitation Game", 2014},
        {"Warcraft", 2016}
    };

    if (file.is_open()) {
        file << "id,title,year\n";

        for (int i = 0; i < std::size(movies); i++)
            file << i + 1 << "," << movies[i].title << "," << movies[i].year << "\n";

        file.close();
    }

    std::cout << "\"movies.csv\" has been created.";;
}