#include <stdio.h>

int global = 10;

int main(){
  int local = 20;
  printf("Ini adalah variable global : %d\n", global);
  printf("Ini adalah variable local : %d\n", local);
  if(int x = 30){
    int b = 40;
    printf("Variable x adalah variable parameter : %d\n", x);
    printf("Variable b adalah variable block : %d", b);
  }
  return 0;
}
