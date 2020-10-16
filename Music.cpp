#include <iostream>
#include "Music.h"
using namespace std;

char* Music::getArtist(){
  return artist;
}

media::duration Music::getDuration(){
  return duration;

}

char* Music::getPublisher(){
  return publisher;

}
