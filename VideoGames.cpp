#include <iostream>
#include "VideoGames.h"

using namespace std;

void VideoGames::setPublisher(char* inputPublisher){
  strcpy(inputPublisher, publisher);
  return;
}

char* VideoGames::getPublisher(){
  return publisher;
}

int VideoGames::setRating(char* inputRating){
  char option = 'a';
  if(strcmp(inputRating, "E10+") == 0){
    option = 'a'; //everyone 10+
  }
  else if(strcmp(inputRating, "E") == 0){
    option = 'b'; //everyone
  }
  else if(strcmp(inputRating, "EC") == 0){
    option = 'c'; //early childhood
  }
  else if(strcmp(inputRating, "T") == 0){
    option = 'd'; //teen
  }
  else if(strcmp(inputRating, "M") == 0){
    option = 'e'; //mature
  }
  else if(strcmp(inputRating, "RP") == 0){
    option = 'f'; //rating pending
  }
  else if(strcmp(inputRating, "AO") == 0){
    option = 'g'; //adult only
  }
  else{
    cout << "Not a valid video game rating." << endl;
  }
  rating = option;
  return 0;
}

const char* VideoGames::getRating(){
  if(rating == 'a'){
    return E10_rating;
  }
  else if(rating == 'b'){
    return E_rating;
  }
  else if(rating == 'c'){
    return EC_rating;
  }
  else if(rating == 'd'){
    return T_rating;
  }
  else if(rating == 'e'){
    return M_rating;
  }
  else if(rating == 'f'){
    return RP_rating;
  }
  else if(rating == 'g'){
    return AO_rating;
  }
  else{
    return NULL;
  }
}
