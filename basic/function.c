#include <stdio.h>

void function(){
  printf("Hello, World!\n");
}

void sum(int a, int b){
  printf("\nSum: %d\n", a + b);
}

void sapaan();

int main(){
  int input;
  int input2;
  function();
  printf("Masukkan nilai 1 kedalam fungsi sum: ");
  scanf("%d", &input);
  printf("Masukkan nilai 2 kedalam fungsi sum: ");
  scanf("%d", &input2);
  sum(input, input2);
  sapaan();
  return 0;
}

void sapaan(){
  printf("Selamat datang di program ini!\n");
}
