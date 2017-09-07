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

int strcmp(char *str1, char *str2){
  while(*str1 && *str2){
    if(*str1 != *str2)
      break;
    str1++;
    str2++;
  }
  return *str2 - *str1;
}
