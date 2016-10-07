#pragma once

#include <iostream>
#include <cstring>
using namespace std;

class Movie {

public:
	// constuctor
	Movie(string newTitle, string newGenre, int newShowtime);

	string getTitle();
	
	string getGenre();

	int getShowtime();

private:
	//need to remain protected and only editable via functions
	string title;

	string genre;

	int showtime; // 24 hours in a day so you better be entering a value between 0 and 23

};
