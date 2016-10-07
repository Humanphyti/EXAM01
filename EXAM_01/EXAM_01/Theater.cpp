#include "Theater.h"
#include "Movie.h"


void Theater::AddMovie(Movie& Movie)
{
    static int i = 0;
    MovieList[i] = Movie;
    i++;
}


Movie Theater::GetMovieList(int i)
{
    return MovieList[i];
}


string Theater::GetMovieForHour(int hour)
{
    string movie;
    if (hour < 0 || hour > 23)
        return "";
    for(int i = 0; i < HOURS; i ++)
    {
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


int Theater::GetShowTimeForGenre(string genre)
{
    for(int i = 0; i < HOURS; i ++)
    {
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


Theater::Theater(string name, string phone)
{
    Name = name;
    Phone = phone;
    PricePopcorn = 5;
    PriceSoda = 3;
}

