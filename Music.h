//header file for child class: music
#include "media.h"

class Music : public media{

public:
  struct duration_t{
    int mins;
    int seconds;
  };
  char* getArtist();
  void setArtist(char* inputArtist);
  int setDuration(int mins, int seconds);
  duration_t getDuration();
  char* getPublisher();
  void setPublisher(char* inputPublisher);
  int setRating(const char*);
private:
  char artist[100];
  duration_t duration;
  char publisher[100];
};
