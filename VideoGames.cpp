#include <iostream>
#include "VideoGames.h"

using namespace std;

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

char* VideoGames::getRating(){
  if(rating == 'a'){
    return "E10+";
  }
  else if(rating == 'b'){
    return "E";
  }
  else if(rating == 'c'){
    return "EC";
  }
  else if(rating == 'd'){
    return "T";
  }
  else if(rating == 'e'){
    return "M";
  }
  else if(rating == 'f'){
    return "R";
  }
  else if(rating == 'g'){
    return "AO";
  }
  else{
    return NULL;
  }
}
