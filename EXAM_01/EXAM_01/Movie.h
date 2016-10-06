#pragma once

#include <iostream>
#include <cstring>
using namespace std;

class Movie {

public:
	Movie(string newTitle, string newGenre, int newShowtime);

	string getTitle();

	string getGenre();

	int getShowtime();

private:
	string title;

	string genre;

	int showtime; //must be in 24 hour time.
};