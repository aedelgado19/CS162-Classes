/*Author: Allison Delgado
 * Last updated: October 13
 * Classes is a project that serves as a media database holding music vids,
 * movies, and songs to practice using classes and inheritance.
 */

#include <iostream>
//#include "media.h"
#include "VideoGames.h"
#include "Music.h"
#include "Movies.h"
#include <vector>
#include <cstring>
using namespace std;

//function prototypes
bool checkLegal(char *command);
void quit();
char* searchMedia(vector<media> mediaVtr, char *searchCommand);
void deleteMedia(vector<media> mediaVtr, char *searchCommand);
void addMedia(vector<media> mediaVtr, char typeOfMedia);
bool mediaValidCheck(char *type);

char* searchMedia(vector<media> mediaVtr, char *searchCommand){
  //iterate thru vector
  // for(vector<media>::iterator index = mediaVtr.begin(); index!=mediaVtr.end(); ++index){
    

  // }
  return NULL; 
}

void deleteMedia(vector<media> mediaVtr, char *searchCommand){


  return;
}
void addMedia(vector<media> mediaVtr, char type){
  int minutesLocal = 0;
  int secondsLocal = 0;
  int yearLocal = 0;
  int ratingLocal = 0;
  
  //adding movie
  if(type == 'a'){
    Movies* movie = new Movies();
    cout << "Enter the title of the movie: " << endl;
    cin.get(movie->getTitle(), 100);
    cin.get();
    cout << "Enter the year it was made: " << endl;
    cin >> yearLocal;
    cout << "Enter the director: " << endl;
    cin.get(movie->getDirector(), 100);
    cin.get();
    cout << "Enter the duration in minutes and seconds." << endl;
    cin >> yearLocal;
    movie->setYear(yearLocal);
    cout << "FIRST enter the duration in minutes (seconds later): " << endl;
    cin >> minutesLocal;
    cout << "Now enter seconds of duration: " << endl;
    cin >> secondsLocal;
    movie->setDuration(minutesLocal, secondsLocal);
    cout << "Enter the rating" << endl;
    cin >> ratingLocal;
    movie->setRating(ratingLocal);
    mediaVtr.push_back(*movie);
  }

  //adding video game
  if(type == 'b'){
    


  }

  //adding music
  if(type == 'c'){

  }
    return;
}


//quit program
void quit(){
  cout << "Quitting program. See you next time!" << endl;
  return;
}

//check to make sure the given command is one of the 4 possible
bool checkLegal(char *command){
  if(strcmp(command, "ADD") == 0){
    return true;
  }
  if(strcmp(command, "DELETE") == 0){
    return true;
  }
  if(strcmp(command, "QUIT") == 0){
    return true;
  }
  if(strcmp(command, "SEARCH") == 0){
    return true;
  }
  return false;
}

//check to see when adding media if type is valid
bool mediaValidCheck(char *type){
  if(strcmp(type, "MOVIE") == 0){
    return true;
  }
  if(strcmp(type, "VIDEO GAME") == 0){
    return true;
  }
  if(strcmp(type, "MUSIC") == 0){
    return true;
  }
    return false;
}

int main(){
  //vector containing Parent class: media
  vector<media> mediaVtr;
  char type[20]; //contains what type of media user wants to add
  char typeOfMedia = 'a'; //either a) movie b) video game or c) music
  cout << "Welcome to the media database.";
    char command[7];
  
  while (strcmp(command, "QUIT") != 0){
    cout << "Enter a command: ADD, SEARCH, DELETE, QUIT" << endl;
    cin.get(command, 7);
    cin.get();
    char searchCommands[6]; //either title or year
    char TorY[100]; //title of media or year of media
    bool mediaValid = false;
    
    //format to all uppercase
    for(int i = 0; i < strlen(command); i++){
      command[i] = toupper(command[i]);
    }
    bool isLegal = checkLegal(command);
    //check if legal
    if(isLegal == true){
      
      if(strcmp(command, "ADD") == 0){
	cout << "What type of media? (movie/video game/music)" << endl;
	cin.get(type, 20);
	cin.get();
	
	//format to upper
	for(int i = 0; i < strlen(type); i++){
	  type[i] = toupper(type[i]);
	}
	//make sure input is a valid type
	mediaValid = mediaValidCheck(type);
	while (mediaValid != true){
	  if(strcmp(type, "MOVIE") == 0){
	    typeOfMedia = 'a';
	  }
	  else if(strcmp(type, "VIDEO GAME") == 0){
	    typeOfMedia = 'b';
	  }
	  else if(strcmp(type, "MUSIC") == 0){
	    typeOfMedia = 'c';
	  }
	}
	//valid input (out of while loop)
	addMedia(mediaVtr, typeOfMedia);
      }
      /*
       if(strcmp(command, "SEARCH") == 0){
	cout << "Search by TITLE or by YEAR? (TITLE/YEAR)" << endl;
	cin.get(searchCommands, 6);
	cin.get();
	if(strcmp(searchCommands, "TITLE") == 0 || strcmp(searchCommands, "title") == 0){
	  cout << "Enter a Title: " << endl;
	  cin.get(TorY, 100);
	  cin.get();
	  searchMedia(mediaVtr, *TorY);
	}
	if(strcmp(searchCommands, "YEAR") == 0 || strcmp(searchCommands, "year") == 0){
	  cout << "Enter a year: " << endl;
	  cin.get(TorY, 100);
	  cin.get();
	  searchMedia(mediaVtr, *TorY);	  
	}

       }
      
      if(strcmp(command, "DELETE") == 0){
	
      }
      */
    }
  }
  quit();
  return 0;
}
