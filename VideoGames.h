//header file for Child class: VideoGames

#include "media.h"
const char* E10_RATING = "E10+";
const char* E_RATING = "E";
const char* EC_RATING = "EC";
const char* T_RATING = "T";
const char* M_RATING = "M";
const char* RP_RATING = "RP";
const char* AO_RATING = "AO";

class VideoGames : public media{

public:
  char* getPublisher();
  void setPublisher(char* inputPublisher);
  const char* getRating();
  const int setRating(char* inputRating);
private:
  char title[100];
  int year;
  char publisher[100];
  char rating;
};
