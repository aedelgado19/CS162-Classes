//header file for child class: movies
#include "media.h"

struct duration_t {
  int mins;
  int seconds;
};

class Movies : public media {
public:

  char* getDirector();
  void setDirector(char* inputDirector);
  duration_t getDuration();
  const char* getRating();
  int setRating(char* inputRating);
  int setDuration(int mins, int seconds);  
    
  //constructor
  Movies();
  //~Movies();
private:
  char director[100];
  duration_t duration;
  char rating;

};
