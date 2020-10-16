//header file for child class: movies
#include "media.h"

class Movies : media {
public:
  char* getDirector();
  duration getDuration();
  int getRating();

private:
  char director[100];
  duration_t duration;
  int rating;

  struct duration_t{
    int mins;
    int seconds;
  }
};
