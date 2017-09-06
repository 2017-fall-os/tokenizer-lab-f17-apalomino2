#include <unistd.h>
#include <stdlib.h>
#include "mytoc.h"
#include <stdio.h>

int countTokens(char *buf, char delim){
  int count = 0;
  
  while(*buf){
    while(*buf == delim)
      buf++;
    if(*buf)
      count++;
    while(*buf && *buf != delim)
      buf++;
  }
  return count;
}

char ** mytoc(char *buf, char delim){
  int bufSize, numTokens;
  bufSize = read(0, buf, 128);
  //remove newline character
  buf[bufSize-1] = '\0';
  numTokens = countTokens(buf, delim);
  printf("%d\n", numTokens);

  //create token vector
  char **tokenVec;
  tokenVec = (char **) calloc(numTokens+1, sizeof(char *));
  tokenVec[numTokens+1] = '\0';

}
