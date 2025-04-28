#include <stdio.h>
#include <stdlib.h>

int main(){
  int* pointer = (int*)malloc(4);
  int* array = (int*)malloc(4 * sizeof(int));
  int* array2 = (int*)calloc(5, sizeof(int));

  printf("Array: %p\n", array);
  printf("Pointer: %p\n", pointer);
  if (pointer == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }
  if (array == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }
  if (array2 == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }
  
  for(int i = 0; i < 4; i++){
    array[i] = i * 10;
  }
  for(int i = 0; i < 5; i++){
    array2[i] = i * 10;
  }
  for(int i = 0; i < 4; i++){
    printf("Array[%d]: %d\n", i, array[i]);
  }
  for(int i = 0; i < 5; i++){
    printf("Array2[%d]: %d\n", i, array2[i]);
  }
  *pointer = 42;
  printf("Value: %d\n", *pointer);
  free(array);
  free(pointer);
  free(array2);
  return 0;
}
