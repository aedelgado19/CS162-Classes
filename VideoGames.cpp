#include <iostream>
#include "VideoGames.h"
#include <cstring>
using namespace std;

const char* E10_RATING = "E10+";
const char* E_RATING = "E";
const char* EC_RATING = "EC";
const char* T_RATING = "T";
const char* M_RATING = "M";
const char* RP_RATING = "RP";
const char* AO_RATING = "AO";

void VideoGames::setPublisher(char* inputPublisher){
  strcpy(publisher, inputPublisher);
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
    return E10_RATING;
  }
  else if(rating == 'b'){
    return E_RATING;
  }
  else if(rating == 'c'){
    return EC_RATING;
  }
  else if(rating == 'd'){
    return T_RATING;
  }
  else if(rating == 'e'){
    return M_RATING;
  }
  else if(rating == 'f'){
    return RP_RATING;
  }
  else if(rating == 'g'){
    return AO_RATING;
  }
  else{
    return NULL;
  }
}
