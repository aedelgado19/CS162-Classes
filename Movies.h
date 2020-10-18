//header file for child class: movies
#include "media.h"

const char* G_rating = "G";
const char* PG_rating = "PG";
const char* PG13_rating = "PG-13";
const char* R_rating = "R";
const char* NR_rating = "NR";
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
  virtual int setRating(char* inputRating);
  int setDuration(int mins, int seconds);  
    
  //constructor
  Movies();
  //~Movies();
private:
  char director[100];
  duration_t duration;
  char rating;

};
