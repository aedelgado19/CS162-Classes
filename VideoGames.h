//header file for Child class: VideoGames

#include "media.h"
const char* E10_rating = "E10+";
const char* E_rating = "E";
const char* EC_rating = "EC";
const char* T_rating = "T";
const char* M_rating = "M";
const char* RP_rating = "RP";
const char* AO_rating = "AO";

class VideoGames : public media{

public:
  char* getPublisher();
  void setPublisher(char* inputPublisher);
  const char* getRating();
  int setRating(char* inputRating);
private:
  char title[100];
  int year;
  char publisher[100];
  char rating;
};
