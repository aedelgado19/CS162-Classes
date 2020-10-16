//header file for child class: music
#include "media.h"

class Music : public media{

public:
  char* getArtist();
  duration_t getDuration();
  char* getPublisher();

private:
  char artist[100];
  duration_t duration;
  char publisher[100];
};
