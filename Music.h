//header file for child class: music
#include "media.h"

class Music : public media{

 public:
  char* getArtist();
  duration getDuration();
  char* getPublisher();

};
