//
// Created by Nick Polizogopoulos on 5/7/25.
//
#include <iostream>
#include <sstream>
#include "streams_and_files.h"

// Given the following string, write a function to parse this into a movie structure.
// "Terminator 1,1984"
/* hint: the title has space, we can't use the extraction operator to extract the title,
we have to use the getline() function instead. */

struct Movie {
    std::string title;
    int year{};
};

Movie parseMovie(const std::string &str) {
    std::stringstream stream;
    stream.str(str);

    Movie movie;
    getline(stream, movie.title, ',');
    stream >> movie.year;

    return movie;
}

void parsingTextIntoObjectsWithStreams() {

    std::cout << "Exercise: Parsing Text into Objects with Streams" << std::endl << "=======================================" << std::endl;

    auto movie = parseMovie("Terminator 1,1984");

    std::cout << movie.title << std::endl;
    std::cout << movie.year << std::endl;

    std::cout << std::endl << std::endl;
}