//Parent class

#include <iostream>
#include "media.h"
#define MOVIES 1
#define VIDEOGAMES 2
#define MUSIC 3

using namespace std;

int media::getYear(){
  return year;

}

int media::setYear(int inputYear){
  year = inputYear;
  return 0;
}

char* media::getTitle(){
  return title;

}
int media::setType(int inputType){
  type = inputType;
  return 0;
}

int media::getType(){
  return type;
}
