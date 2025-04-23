#include <stdio.h>

int main(){
  int array[5] = {1, 2, 3, 4, 5};
  int banyakAngka[5];
  char alphabet[][3] = {
    {'A', 'B', 'C'},
    {'D', 'E', 'F'},
    {'G', 'H', 'I'}
  };

  printf("Nilai array index 2 : %d\n", array[2]);
  banyakAngka[0] = 1;
  banyakAngka[1] = 2;
  banyakAngka[2] = 3;
  banyakAngka[3] = 4;
  banyakAngka[4] = 5;
  printf("Nilai array2 index 3 : %d\n", banyakAngka[3]);
  
  for(int i = 0; i < 5; i++){
    printf("Nilai array index %d : %d\n", i, array[i]);
  }

  for(int i : banyakAngka){
    printf("Nilai array2 index %d : %d\n", i, banyakAngka[i]);
  }

   printf("Nilai alphabet index 1,2 : %c\n", alphabet[1][2]);

  return 0;
}
