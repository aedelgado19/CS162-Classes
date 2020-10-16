#include <iostream>
#include "Music.h"
using namespace std;

char* Music::getArtist(){
  return artist;
}

Music::duration_t Music::getDuration(){
  return duration;

}

char* Music::getPublisher(){
  return publisher;

}
