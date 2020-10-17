#include <iostream>
#include "VideoGames.h"

char* VideoGames::getPublisher(){
  return publisher;
}

int VideoGames::setRating(char* inputRating){
  rating = inputRating;
  return 0;
}

char* VideoGames::getRating(){
  return rating;
}
