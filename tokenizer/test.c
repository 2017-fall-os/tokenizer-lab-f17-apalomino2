#include <unistd.h>
#include "mytoc.h"
#include "string.h"

int main(){
  char *buf = "test\n";
  for(int i=0; i<5; i++){
    write(1, buf, strlen(buf));
  }
}
