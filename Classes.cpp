/* Author: Allison Delgado
 * Last updated: October 11
 * Classes is a project that serves as a media database holding music vids,
 * movies, and songs to practice using classes and inheritance.
 */

#include <iostream>
#include "ClassesHeader.h"
using namespace std;

class Parent{
  public:
  int getYear();
  char* getTitle();
  
};

int Parent::getYear(){

}

char* Parent::getTitle(){

}

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
  cout << "Welcome to the media database."
  
  bool isLegal = checkLegal(command);

  while (strcmp(command, "QUIT") != 0){
    cout << "Enter a command: ADD, SEARCH, DELETE, QUIT" << endl;
    char command[7];
    cin.get(command, 7);
    cin.get();
    //format to all uppercase
    for(int i = 0; i < strlen(command); i++){
      command[i] = toupper(command[i]);
    }
    //check if legal
    if(isLegal == true){
      
      if(strcmp(command, "ADD") == 0){
	
      }
      if(strcmp(command, "SEARCH") == 0){
	
      }
      if(strcmp(command, "DELETE") == 0){
	
      }
    }
  }
  return 0;
}
