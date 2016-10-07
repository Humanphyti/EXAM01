#include "Movie.h"
//standard constructor with a genre check
Movie::Movie(string newTitle, string newGenre, int newShowtime)
{
	title = newTitle;
	//output the genre name if it falls in the categories or default to comedy
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
