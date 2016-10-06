#pragma once

#include <iostream>
#include <cstring>
#include "movie.h"
using namespace std;

class Theater {

public:

	Theater(string newName, string newPhone);

	void addMovie(Movie& Movie);

	void initializeMovies(Movie* movieListing[]);

	string getMovieForHour(int hour);

	int getShowtimeForGenre();

	int getPopcornPrice();

	int getCokePrice();

private:
	string name;

	string phone;

	int hour;
};