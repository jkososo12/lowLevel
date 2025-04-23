#include <stdio.h>

int main(){
  int input;
  if(10 > 5){
    printf("10 lebih besar daripada 5\n");
  } else {
    printf("10 lebih kecil daripada 5\n");
  }

  printf("Masukkan angka: ");
  scanf("%d", &input);

  if(input > 0){
    printf("Angka %d adalah positif\n", input);
  } else if(input < 0){
    printf("Angka %d adalah negatif\n", input);
  } else {
    printf("Angka %d adalah nol\n", input);
  }

  return 0;
}
