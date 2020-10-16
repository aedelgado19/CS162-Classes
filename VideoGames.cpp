#include <iostream>
#include "VideoGames.h"

char* VideoGames::getPublisher(){
  return publisher;
}

int VideoGames::setRating(int inputRating){
  rating = inputRating;
  return 0;
}

int VideoGames::getRating(){
  return rating;
}
