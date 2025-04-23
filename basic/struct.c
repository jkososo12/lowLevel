#include <stdio.h>

struct siswa{
  char *nama,
  char *alamat 
  int umur;
}

int main(){
  struct siswa s1;
  printf("Nama : %c\n", s1.nama);
  printf("Alamat : %c\n", s1.alamat);
  printf("Nama : %d\n", s1.umur);

  return 0;
}
