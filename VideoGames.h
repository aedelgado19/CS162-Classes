//header file for Child class: VideoGames

#include "media.h"

class VideoGames : public media{

public:
  char* getPublisher();
  int getRating();

private:
  char title[100];
  int year;
  char publisher[100];
  int rating;
};
