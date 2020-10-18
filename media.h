//header file for Parent class: media
#pragma once 

class media{
public:
  int getYear();
  char* getTitle();
  int setTitle(char* inputTitle);
  int setYear(int inputYear);
  int setType(int inputType);
  int getType();
  int type;
  virtual ~media() {};
  //  virtual int setRating(char* inputRating);
private:
  //store fields
  char title[100];
  int year;
};
