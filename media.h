//header file for Parent class: media
#pragma once

class media{
public:
  int getYear();
  char* getTitle();
  int setYear(int inputYear);
  int setType(int inputType);
  int getType();
  int type;
  // ~media();
  virtual int setRating(char* inputRating);
private:
  //store fields
  char title[100];
  int year;
};
