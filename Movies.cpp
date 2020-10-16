#include <iostream>
#include "Movies.h"
using namespace std;

char* Movies::getDirector(){
  return director;
}

Movies::duration_t Movies::getDuration(){
  return duration;
}

//sets duration in struct
int Movies::setDuration(int mins, int seconds){
  duration.mins = mins;
  duration.seconds = seconds;
  return 0;
}

int Movies::getRating(){
  return rating;
}
