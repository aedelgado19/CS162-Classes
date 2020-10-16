//header file for child class: movies
#include "media.h"

class Movies : media {
public:

  struct duration_t{
    int mins;
    int seconds;
  };
  char* getDirector();
  duration_t getDuration();
  int getRating();
  int setDuration(int mins, int seconds);  
private:

  char director[100];
  duration_t duration;
  int rating;

};
