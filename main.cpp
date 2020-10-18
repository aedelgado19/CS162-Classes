/*Author: Allison DelgadoAA
 * Last updated: October 17
 * Classes is a project that serves as a media database holding music vids,
 * movies, and songs to practice using classes and inheritance.
 */

#include <iostream>
#include "VideoGames.h"
#include "Music.h"
#include "Movies.h"
#include <vector>
#include <cstring>

#define MOVIES 1
#define VIDEOGAMES 2
#define MUSIC 3
using namespace std;

//function prototypes
bool checkLegal(char *command);
void quit();
char* searchMedia(vector<media> mediaVtr, char *searchCommand, char *search);
void deleteMedia(vector<media> mediaVtr, char *searchCommand);
void addMedia(vector<media> *vtrptr, int typeOfMedia);
bool mediaValidCheck(char *type);

char* searchMedia(vector<media> mediaVtr, char *searchCommand, char *search){ //searchCommand is a title or year
  vector<media> *vptr = &mediaVtr;
  //iterate thru vector
  for(vector<media>::iterator index = vptr->begin(); index!=vptr->end(); ++index){
    
    if(strcmp(index->getTitle(), search) == 0){
       cout << "Title: " << index->getTitle() << endl;
       cout << "Year: " << index->getYear() << endl;
             
       if(index->getType() == MOVIES){
	 Movies *mptr = (Movies*) &index;
	 cout << "Director: " << mptr->getDirector() << endl;
	 //cout << "Rating: " << dynamic_cast<Movies*>(*index)->getRating() << endl;
	 //cout << "Duration: " << dynamic_cast<Movies*>(*index)->getDuration() << endl;
	 cout << " " << endl;
       }
       else if(index->getType() == VIDEOGAMES){
	 /* cout << "Publisher: " <<
	    cout << "Rating: " <<
	  */
       }
       else if(index->getType() == MUSIC){
	 /*
	   cout << "Artist: " <<
	   cout << "Duration: " <<
	   cout << "Publisher: " <<
	   
	  */
	 
       }
       else { //something isn't right if it's else..
	 cout << "ERROR: could not find class name. " << endl;
       }
     }
  }
  return NULL; 
}

void deleteMedia(vector<media> mediaVtr, char *searchCommand){


  return;
}
void addMedia(vector<media> *vtrptr, int typeOfMedia){
  int minutesLocal = 0;
  int secondsLocal = 0;
  int yearLocal = 0;
  char ratingLocal[6]; 
  
  //adding movie
  if(typeOfMedia == 1){
    Movies* movie = new Movies();
    
    cout << "Enter the title of the movie: " << endl;
    cin.get(movie->getTitle(), 100);
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Enter the year it was made: " << endl;
    cin >> yearLocal;
    cin.clear();
    movie->setYear(yearLocal);
    cin.ignore(10000, '\n');
    cout << "Enter the director: " << endl;
    cin.get(movie->getDirector(), 100);
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Enter the duration in minutes and seconds." << endl;
    cout << "FIRST enter the duration in minutes (seconds later): " << endl;
    cin >> minutesLocal;
    cout << "Now enter seconds: " << endl;
    cin >> secondsLocal;
    movie->setDuration(minutesLocal, secondsLocal);
    cin.ignore(10000, '\n');
    cout << "Enter the rating: " << endl;
    cout << "Possible ratings include G, PG, PG-13, R, NR. " << endl;
    cin.get(ratingLocal, 6);
    cin.clear();
    cin.ignore(10000, '\n');
    movie->setRating(ratingLocal);
    vtrptr->push_back(*movie);
    cout << "Movie added." << endl;
  }

  //adding video game
  if(typeOfMedia == 2){
    VideoGames *vg = new VideoGames();
    cout << "Enter the title of the video game: " << endl;
    cin.get(vg->getTitle(), 100);
    cin.get();
    cout << "Enter the year it was released: " << endl;
    cin >> yearLocal;
    cin.get();
    vg->setYear(yearLocal);
    cout << "Enter the publisher of the video game: " << endl;
    cin.get(vg->getPublisher(), 100);
    cin.get();
    cout << "Enter the rating of the video game: " << endl;
    cout << "Possible video game ratings: E10+, E, EC, T, M, RP, AO" << endl;
    cin.get(ratingLocal, 6);
    cin.get();
    vg->setRating(ratingLocal);
    vtrptr->push_back(*vg);
    cout << "Video game added." << endl;
  }

  //adding music
  if(typeOfMedia == 3){
    Music *m = new Music();
    cout << "Enter the title of the song: " << endl;
    cin.get(m->getTitle(), 100);
    cin.get();
    cout << "Enter the year it was released: " << endl;
    cin >> yearLocal;
    cin.get();
    m->setYear(yearLocal);
    cout<< "Enter the artist: " << endl;
    cin.get(m->getArtist(), 100);
    cout << "Enter the duration in minutes and seconds." << endl;
    cout << "FIRST enter the duration in MINUTES (seconds later): " << endl;
    cin >> minutesLocal;
    cout << "Now enter the seconds: " << endl;
    cin >> secondsLocal;
    cin.get();
    m->setDuration(minutesLocal, secondsLocal);
    cout << "Enter the publisher of the song: " << endl;
    cin.get(m->getPublisher(), 100);
    cin.get();
    cout << "Music added." << endl;    
    cout << "fixme - need to add pushback" << endl;
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
  vector<media>* vtrptr = &mediaVtr;
  char type[20]; //contains what type of media user wants to add
  int typeOfMedia = 0; //either 1) movie 2) video game or 3) music
  cout << "Welcome to the media database." << endl;
  char command[7];
  
  while (strcmp(command, "QUIT") != 0){
    cout << "Enter a command: ADD, SEARCH, DELETE, QUIT" << endl;
    cin.get(command, 7);
    cin.get();
    char searchCommands[6]; //either title or year
    char search[100]; //title of media or year of media
    bool mediaValid = false;
    
    //format to all uppercase
    for(int i = 0; i < strlen(command); i++){
      command[i] = toupper(command[i]);
    }
    bool isLegal = checkLegal(command);
    //check if legal
    if(isLegal == true){
      
      if(strcmp(command, "ADD") == 0){
	// Start while here

	do {
	  cout << "What type of media? (movie/video game/music)" << endl;
	  cin.get(type, 20);
	  cin.get();
	
	  //format to upper
	  for(int i = 0; i < strlen(type); i++){
	    type[i] = toupper(type[i]);
	  }
	  //make sure input is a valid type
	  mediaValid = mediaValidCheck(type);
	  if (mediaValid == true) {
	    //
	    //while (mediaValid != true){
	    if(strcmp(type, "MOVIE") == 0){
	      typeOfMedia = 1;
	    }
	    else if(strcmp(type, "VIDEO GAME") == 0){
	      typeOfMedia = 2;
	    }
	    else if(strcmp(type, "MUSIC") == 0){
	      typeOfMedia = 3;
	    }
	  }
	} while (mediaValid == false); // end while 
	//valid input (out of while loop)
	addMedia(vtrptr, typeOfMedia);
      }

       if(strcmp(command, "SEARCH") == 0){
	cout << "Search by TITLE or by YEAR? (TITLE/YEAR)" << endl;
	cin.get(searchCommands, 6);
	cin.get();
	if(strcmp(searchCommands, "TITLE") == 0 || strcmp(searchCommands, "title") == 0){
	  cout << "Enter a Title: " << endl;
	  cin.get(search, 100);
	  cin.get();
	  searchMedia(mediaVtr, searchCommands, search);
	}
	if(strcmp(searchCommands, "YEAR") == 0 || strcmp(searchCommands, "year") == 0){
	  cout << "Enter a year: " << endl;
	  cin.get(search, 100);
	  cin.get();
	  searchMedia(mediaVtr, searchCommands, search);	  
	}

       }
      
      if(strcmp(command, "DELETE") == 0){
	
      }

    }
  }
  quit();
  return 0;
}
