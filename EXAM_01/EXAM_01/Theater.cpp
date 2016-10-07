#include "Theater.h"
#include "Movie.h"

// array value adder
void Theater::AddMovie(Movie& Movie)
{
    static int i = 0;
    MovieList[i] = Movie;
    i++;
}

// array constructor
Movie Theater::GetMovieList(int i)
{
    return MovieList[i];
}

//hour getter
string Theater::GetMovieForHour(int hour)
{
    string movie;
    if (hour < 0 || hour > 23)
        return "";
    for(int i = 0; i < HOURS; i ++)
    {
        // access the showtime values of the movies.
        if(MovieList[i].GetShowTime() >= hour)
        {
            movie = MovieList[i].GetTitle();
            return movie;
        }
        else
            movie = "";
    }
    return movie;
}

//showtime checker 
int Theater::GetShowTimeForGenre(string genre)
{
    for(int i = 0; i < HOURS; i ++)
    {
        // accessing the genre portion of the movies.
        if(MovieList[i].GetGenre() == genre)
            return MovieList[i].GetShowTime();
    }
    return -1;
}


int Theater::GetPopcornPrice()
{
    return PricePopcorn;
}

int Theater::GetCokePrice()
{
    return PriceSoda;
}

//theater constructor
Theater::Theater(string name, string phone)
{
    Name = name;
    Phone = phone;
    PricePopcorn = 8; // I know they seem high but have you been to a theater recently?
    PriceSoda = 5; // Seriously though a drink usually comes out to this much at the counter.
}

