#include <unistd.h>
#include <stdlib.h>
#include "mytoc.h"
#include "utility.h"

void printVec(char **tokenVec){
  print("~~~~Vector~~~~\n");
  for(;*tokenVec; tokenVec++){
    print(*tokenVec);
    print("\n");
  }
  print("~~~~~~~~~~~~~~\n");
}

void freeTokens(char **tokenVec){
  for(;*tokenVec; tokenVec++)
    free(*tokenVec);
}

int main(){
  char buf[128];
  char delim = ' ';

  for(;;){
    print("$");
    char **tokenVec = mytoc(buf, delim);
    if(!strcmp(tokenVec[0], "exit") && !tokenVec[1])
      //exit the programm
      break;
    if(!strcmp(tokenVec[0], "\\d")){
      //possible delimiter change must meet requirements
      if(strlen(tokenVec[1]) != 1 ||
	 !strcmp(tokenVec[1], "\\") ||
	 !strcmp(tokenVec[1], "d")){
	    print("Invalid delimiter\n");
      }
      else{
	//delimiter change
	delim = tokenVec[1][0];
	print("Delimiter is now '");
	print(tokenVec[1]);
	print("'\n");
	
      }
    }
    else{
      printVec(tokenVec);
      freeTokens(tokenVec);
      free(tokenVec);
    }
  }
  print("Laterz! \\(^.^)/\n");
}
