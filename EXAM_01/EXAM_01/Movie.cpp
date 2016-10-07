#include "Movie.h"

Movie::Movie(string newTitle, string newGenre, int newShowtime)
{
	title = newTitle;
    if(genre == "Action" || genre == "Horror" || genre == "Documentary" || genre == "Comedy")
        genre = newGenre;
    else
        genre = "Comedy";
    
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
