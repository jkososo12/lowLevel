#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("========================================\n");
  printf("Selamat datang di program pengolahan data\n");
  printf("========================================\n");
  printf("Masukkan fungsi yang ingin anda gunakan : \n");
  printf("1. malloc - 1\t2. calloc - 2\n");
  printf("3. realloc - 3\n");
  int option;
  scanf("%d", &option);
  
  int n;
  int *arr = NULL;
  switch(option){
    case 1:
      printf("===================\n");
      printf("Anda memilih malloc\n");
      printf("===================\n");
      printf("Masukkan jumlah data yang ingin dialokasikan : ");
      scanf("%d", &n);
      arr = (int*)malloc(n * sizeof(int));
      if(arr == NULL) {
        printf("Alokasi memori gagal\n");
        return 1;
      }
      printf("Jumlah data yang dialokasikan adalah : %d\n", n);
      printf("Alamat data yang dialokasikan adalah : %p\n", arr);
      break;
    case 2:
      printf("===================\n");
      printf("Anda memilih calloc\n");
      printf("===================\n");
      printf("Masukkan jumlah data yang ingin dialokasikan : ");
      scanf("%d", &n);
      arr = (int*)calloc(n, sizeof(int));
      if(arr == NULL) {
        printf("Alokasi memori gagal\n");
        return 1;
      }
      printf("Jumlah data yang dialokasikan adalah : %d\n", n);
      break;
    case 3:
      printf("Anda memilih realloc\n");
      break;
    default:
      printf("Pilihan tidak valid\n");
      return 1;
  }
  free(arr);
  return 0;
}
