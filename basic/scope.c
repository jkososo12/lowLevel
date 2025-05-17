#include <stdio.h>

int global = 10; // bisa di akses di mana saja
int z = 51; // tidak bisa di akses karena sudah ada variable dengan nama sama di block function main

int main(){
  int local = 20; // hanya bisa di function main / block ini
  int z = 60; // sama kaya variable local
  printf("Ini adalah variable global : %d\n", global);
  printf("Ini adalah variable local : %d\n", local);
  printf("Ini adalah variable z : %d\n", z);
  if(local >= 30){ // cuman bisa di akses dari if ini
    int b = 40;
    printf("Variable x adalah variable parameter : %d\n", x);
    printf("Variable b adalah variable block : %d", b);
  }
  return 0;
}
