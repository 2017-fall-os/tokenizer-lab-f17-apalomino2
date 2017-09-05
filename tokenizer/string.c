#include "string.h"

int strlen(char *str){
  int count = 0;
  while(*str){
    count++;
    str++;
  }
  return count;
}
