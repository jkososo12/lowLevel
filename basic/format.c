#include <stdio.h>

int main(){
  int age = 24;
  float price = 20.10;
  double pi = 3.14159265358979323846; 
  char currency = '$';
  char name[] = "John Doe";

  printf("Nama : %s,", name); 
  printf(" dengan umur : %d\n", age);

  printf("Harga : %c%.2f\n", currency, price);
  return 0;
}
