#include <iostream>
#include "Movies.h"

using namespace std;

char* Movies::getDirector(){
  return director;
}

media::duration_t Movies::getDuration(){
  return duration;
}

int Movies::getRating(){
  return rating;
}
