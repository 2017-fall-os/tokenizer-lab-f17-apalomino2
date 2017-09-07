#include <unistd.h>
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

int main(){
  char buf[128];
  char delim = ' ';

  for(;;){
    print("$");
    char **tokenVec = mytoc(buf, delim);
    if(!strcmp(tokenVec[0], "exit") && !tokenVec[1])
      //exit keyword was entered alone
      break;
    if(!strcmp(tokenVec[0], "\\d")){
      //possible delimiter change request must meet requirements
      if(strlen(tokenVec[1]) != 1 ||
	!strcmp(tokenVec[1], "\\") ||
	 !strcmp(tokenVec[1], "d"))
	  {
	    print("Invalid delimiter\n");
      }
      else{
	//delimiter change
	delim = tokenVec[1][0];
      }
    }
    else
      printVec(tokenVec);
  }  
}
