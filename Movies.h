//header file for child class: movies
#include "media.h"

const char* G_RATING = "G";
const char* PG_RATING = "PG";
const char* PG13_RATING = "PG-13";
const char* R_RATING = "R";
const char* NR_RATING = "NR";
class Movies : public media {
public:
  struct duration_t{
    int mins;
    int seconds;
  };
  char* getDirector();
  void setDirector(char* inputDirector);
  duration_t getDuration();
  const char* getRating();
  const int setRating(char* inputRating);
  int setDuration(int mins, int seconds);  
    
  //constructor
  Movies();
  //~Movies();
private:
  char director[100];
  duration_t duration;
  char rating;

};
