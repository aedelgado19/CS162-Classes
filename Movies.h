//header file for child class: movies
#include "media.h"

class Movies : media {
 public:
  char* getDirector();
  duration getDuration();
  int getRating();

};
