/*Author: Allison Delgado
 * Last updated: October 13
 * Classes is a project that serves as a media database holding music vids,
 * movies, and songs to practice using classes and inheritance.
 */

#include <iostream>
#include "media.h"
#include <vector>
#include <cstring>
using namespace std;

//function prototypes
bool checkLegal(char *command);
void quit();

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

int main(){
  //vector containing Parent class: media
  vector<media> mediaVtr;
  cout << "Welcome to the media database.";
    char command[7];
  
  while (strcmp(command, "QUIT") != 0){
    cout << "Enter a command: ADD, SEARCH, DELETE, QUIT" << endl;
    cin.get(command, 7);
    cin.get();
    char searchCommands[6]; //either title or year
    
    //format to all uppercase
    for(int i = 0; i < strlen(command); i++){
      command[i] = toupper(command[i]);
    }
    bool isLegal = checkLegal(command);
    //check if legal
    if(isLegal == true){
      
      if(strcmp(command, "ADD") == 0){
	cout << "ADD lets you add any kind of media or information." << endl;
	
      }
      if(strcmp(command, "SEARCH") == 0){
	cout << "Search by TITLE or by YEAR? (TITLE/YEAR)" << endl;
	cin.get(searchCommands, 6);
	cin.get();
	if(strcmp(searchCommands, "TITLE") == 0 || strcmp(searchCommands, "title") == 0){

	}
	if(strcmp(searchCommands, "YEAR") == 0 || strcmp(searchCommands, "year") == 0){

	}
	  
	
      }
      if(strcmp(command, "DELETE") == 0){
	
      }
    }
  }
  quit();
  return 0;
}
