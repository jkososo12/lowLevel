#include <stdio.h>

  int array[5] = {1, 2, 3, 4, 5};

int main(){
  printf("Perulangan biasa : \n");
  for(int i = 0; i <= 5; i++){
    printf("Perulangan ke : %d\n", i);
  }
  
  printf("Perulangan array : \n");
  for(int i : array){
    printf("Perulangan ke : %d\n", i);
  }
  return 0;
}
