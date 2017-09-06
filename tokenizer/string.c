#include <unistd.h>
#include "string.h"

int strlen(char *str){
  int count = 0;
  while(*str){
    if(*str != '\\')
      count++;
    str++;
  }
  return count;
}
