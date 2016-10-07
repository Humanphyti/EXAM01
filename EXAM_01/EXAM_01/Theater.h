
#ifndef __Exam_1__Theater__
#define __Exam_1__Theater__

#include <iostream>
#include "Movie.h"

using namespace std;

// set static constatnt for array
static const int HOURS = 24;

class Theater
{
public:
    // Theater Functions
    void AddMovie(Movie& Movie);
    Movie GetMovieList(int i);
    string GetMovieForHour(int hour);
    int GetShowTimeForGenre(string genre);
    int GetPopcornPrice();
    int GetCokePrice();
    
    // Theater Constructor
    Theater(string name, string phone);    
   
private:
    // Values of theater. necessarily untouchable by public.
    string Name;
    string Phone;
    Movie MovieList[HOURS];
    int PricePopcorn; 
    int PriceSoda;
    

    
};

#endif /* defined(__Exam_1__Theater__) */
