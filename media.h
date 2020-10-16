//header file for Parent class: media
#pragma once

class media{
public:
  int getYear();
  char* getTitle();
  int setYear(int inputYear);
private:
  //store fields
  char title[100];
  int year;
};
