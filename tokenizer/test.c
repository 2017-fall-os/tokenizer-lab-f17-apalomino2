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
      break;
    if(!strcmp(tokenVec[0], "\\d")){
      if(!tokenVec[1] ||
	 !strcmp(tokenVec[1], "\\") ||
	 !strcmp(tokenVec[1], "d") ||
	 strlen(tokenVec[1]) != 1){
	   print("Invalid delimiter\n");
      }
      else{
	delim = tokenVec[1][0];
      }
    }
    else
      printVec(tokenVec);
  }  
}
