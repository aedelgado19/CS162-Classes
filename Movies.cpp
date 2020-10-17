#include <iostream>
#include "Movies.h"
using namespace std;

char* Movies::getDirector(){
  return director;
}

Movies::duration_t Movies::getDuration(){
  return duration;
}

int Movies::setRating(char* inputRating){
  rating = inputRating;
  return 0;
}

//sets duration in struct
int Movies::setDuration(int mins, int seconds){
  duration.mins = mins;
  duration.seconds = seconds;
  return 0;
}

char* Movies::getRating(){
  return rating;
}
