#include <stdio.h>
#include <stdlib.h>

int main(){
  int elements;
  printf("Masukkan jumlah elemen : ");
  scanf("%d", &elements);

  int *arr = (int*)calloc(elements,sizeof(int));
  printf("Masukkan nilai element : \n");
  for(int i = 0; i < elements; i++){
    printf("Element ke %d : ", i);
    scanf("%d", &arr[i]);
  }
  printf("Nilai element yang dimasukkan : \n");
  for(int i = 0; i < elements; i++){
    printf("%d ", i );
  }
  return 0;
}
