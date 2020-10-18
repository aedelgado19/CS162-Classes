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
  virtual ~media();
private:
  //store fields
  char title[100];
  int year;
};
