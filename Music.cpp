#include <iostream>
#include "Music.h"
using namespace std;

char* Music::getArtist(){
  return artist;
}

void Music::setArtist(char* inputArtist){
  strcpy(artist, inputArtist);
  return;
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

void Music::setPublisher(char* inputPublisher){
  strcpy(publisher, inputPublisher);
  return;
}
