#include <iostream>
#include "Music.h"
using namespace std;

char* Music::getArtist(){
  return artist;
}

Music::duration_t Music::getDuration(){
  return duration;
}

int Music::setDuration(int mins, int seconds){
  duration.mins = mins;
  duration.seconds = seconds;
  return 0;
}

char* Music::getPublisher(){
  return publisher;

}
