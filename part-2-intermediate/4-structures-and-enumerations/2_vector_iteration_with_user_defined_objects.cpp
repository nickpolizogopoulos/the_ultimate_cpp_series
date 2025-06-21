//
// Created by Nick Polizogopoulos on 21/6/25.
//
#include <iostream>
#include "structures-and-enumerations.h"
#include <vector>

// Ask the user to enter their two favorite movies and store them in a vector.
// Then iterate through the vector to print each movie.
// Each movie must have a title and a releasedYear members.

struct Movie {
    std::string title;
    int releasedYear;
};

void vectorIterationWithUserDefinedObjects() {

    std::cout << "Exercise: Vector Iteration With User Defined Objects" << std::endl << "=======================================" << std::endl;

    Movie firstMovie;
    std::cout << "> First Movie: " << std::endl;

    std::cout << "Title: ";
    std::getline(std::cin >> std::ws, firstMovie.title);

    std::cout << "Year Released: ";
    std::cin >> firstMovie.releasedYear;

    Movie secondMovie;
    std::cout << "> Second Movie: " << std::endl;

    std::cout << "Title: ";
    std::getline(std::cin >> std::ws, secondMovie.title);

    std::cout << "Year Released: ";
    std::cin >> secondMovie.releasedYear;

    std::vector<Movie> movies;
    movies.push_back(firstMovie);
    movies.push_back(secondMovie);

    std::cout << std::endl << "Your favorite movies are:" << std::endl;

    for (const Movie& movie: movies) {
        std::cout << movie.title << " - " << movie.releasedYear << std::endl;
    }

    std::cout << std::endl << std::endl;
}