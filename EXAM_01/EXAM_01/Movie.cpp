#include "Movie.h"

Movie::Movie(string newTitle, string newGenre, int newShowtime)
{
	title = newTitle;
	genre = newGenre;
	showtime = newShowtime;
}

string Movie::getTitle()
{
	return title;
}

string Movie::getGenre()
{
	return genre;
}

int Movie::getShowtime()
{
	return showtime;
}
