
#include <stdio.h>
#include <stdlib.h>

int main() {
    int elements;
    printf("Enter the number of elements: ");
    scanf("%d", &elements);

    int *arr = (int *)calloc(elements, sizeof(int));

    printf("Nilai awal array:\n");
    for (int i = 0; i < elements; i++) {
        printf("arr[%d] : %d\n", i, arr[i]);
    }
    printf("\n");

    printf("Enter the new value for each element:\n");
    for (int i = 0; i < elements; i++) {
        printf("arr[%d] : ", i);
        scanf("%d", &arr[i]); // <-- di sini tanpa \n
    }

    printf("Nilai akhir array:\n");
    for (int i = 0; i < elements; i++) {
        printf("arr[%d] : %d\n", i, arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}

