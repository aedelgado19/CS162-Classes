//Parent class

#include <iostream>
#include "media.h"
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
