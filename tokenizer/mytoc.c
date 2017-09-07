#include <unistd.h>
#include <stdlib.h>
#include "mytoc.h"
#include "utility.h"

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

void fillVec(char **tokenVec, char *buf, char delim, int numTokens){
  char *temp;
  int numChars;
  while(numTokens){
    //get to the beginning of the token
    while(*buf == delim)
      buf++;

    //get token size
    temp = buf;
    numChars = 0;
    while(*temp && *temp != delim){
      numChars++;
      temp++;
    }

    //create and place token
    *tokenVec = calloc(numChars+1, sizeof(char));
    temp = *tokenVec;
    while(*buf && *buf != delim){
      *temp = *buf;
      buf++;
      temp++;
    }

    tokenVec++;
    numTokens--;
  }
}

char ** mytoc(char *buf, char delim){
  int bufSize, numTokens;
  bufSize = read(0, buf, 128);
  //remove newline character
  buf[bufSize-1] = '\0';
  numTokens = countTokens(buf, delim);

  //create token vector
  char **tokenVec;
  tokenVec = (char **) calloc(numTokens+1, sizeof(char *));
  fillVec(tokenVec, buf, delim, numTokens);
  
  return tokenVec;
}
