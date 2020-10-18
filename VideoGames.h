//header file for Child class: VideoGames

#include "media.h"

class VideoGames : public media{

public:
  char* getPublisher();
  void setPublisher(char* inputPublisher);
  char* getRating();
  int setRating(char* inputRating);
private:
  char title[100];
  int year;
  char publisher[100];
  char rating;
};
