#include <iostream>
#include "Movies.h"
#define MOVIES 1

using namespace std;

char* Movies::getDirector(){
  return director;
}

Movies::duration_t Movies::getDuration(){
  return duration;
}

int Movies::setRating(char* inputRating){
  char option = 'a';
  if(strcmp(inputRating, "G") == 0){
    option = 'a';
  }
  else if(strcmp(inputRating, "PG") == 0){
    option = 'b';
  }
  else if(strcmp(inputRating, "PG-13") == 0){
    option = 'c';
  }
  else if(strcmp(inputRating, "R") == 0){
    option = 'd';
  }
  else if(strcmp(inputRating, "NR") == 0){
    option = 'e';
  }
  else{
    cout << "That is not a valid movie rating." << endl;
  }
  rating = option;
  return 0;
}

//sets duration in struct
int Movies::setDuration(int mins, int seconds){
  duration.mins = mins;
  duration.seconds = seconds;
  return 0;
}

char* Movies::getRating(){
  if(rating == 'a'){
    return "G";
  }
  else if(rating == 'b'){
    return "PG";
  }
  else if(rating == 'c'){
    return "PG-13";
  }
  else if(rating == 'd'){
    return "R";
  }
  else if(rating == 'e'){
    return "NR";
  }
  else{
    return NULL;
  }
}

//constructor
Movies::Movies(){
  cout << "constructor" << endl;
  setType(MOVIES);
}
