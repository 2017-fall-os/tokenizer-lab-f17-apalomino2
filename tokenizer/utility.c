#include <unistd.h>
#include "utility.h"

void print(char *buf){
  write(1, buf, strlen(buf));
}

int strlen(char *str){
  int count = 0;
  while(*str){
    if(*str != '\\')
      count++;
    str++;
  }
  return count;
}
