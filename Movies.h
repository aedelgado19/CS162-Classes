//header file for child class: movies
#include "media.h"

class Movies : public media {
public:

  struct duration_t{
    int mins;
    int seconds;
  };
  char* getDirector();
  void setDirector(char* inputDirector);
  duration_t getDuration();
  char* getRating();
  int setRating(char* inputRating);
  int setDuration(int mins, int seconds);  
    
  //constructor
  Movies();
private:
  char director[100];
  duration_t duration;
  char rating;

};
