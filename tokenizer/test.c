#include <unistd.h>
#include <stdio.h>
#include "mytoc.h"
#include "string.h"

void print(char *str){
  write(1, str, strlen(str));
}

void printVec(char **tokenVec){
  printf("~~~~Vector~~~~");
  for(;*tokenVec; tokenVec++){
    printf(*tokenVec);
  }
  printf("~~~~~~~~~~~~~~");
}

int main(){
  char buf[128];
  char delim = ' ';

  for(;;){
    print("$");
    char **tokenVec = mytoc(buf, delim);
    //printVec(tokenVec);
  }
  
}
