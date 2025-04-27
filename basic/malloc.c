#include <stdio.h>
#include <stdlib.h>

int main(){
  int* pointer = (int*)malloc(4);
  printf("Pointer: %p\n", pointer);
  return 0;
}
