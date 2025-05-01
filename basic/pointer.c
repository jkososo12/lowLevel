#include <stdio.h>

int main(){
  int a = 5;
  int *p = &a;
  printf("Nilai dari variable a = %d\n", a);
  printf("Alamat dari variable a = %p\n", &a);
  printf("Mengakses alamat dari variable pointer = %p\n", p);
  return 0;
}
