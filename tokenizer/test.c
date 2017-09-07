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
    printVec(tokenVec);
  }
  
}
