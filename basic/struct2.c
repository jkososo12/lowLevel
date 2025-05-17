#include <stdio.h>
#include <string.h> // Untuk strcpy

typedef struct {
    char nama[20];
    int absen;
    double nilai;
} siswa;

int main() {
    siswa s1, s2;

    strcpy(s1.nama, "Budi");
    s1.absen = 1;
    s1.nilai = 90.5;

    strcpy(s2.nama, "Siti");
    s2.absen = 2;
    s2.nilai = 85.0;

    printf("Nama: %s\n", s1.nama);
    printf("Absen: %d\n", s1.absen);
    printf("Nilai: %.2f\n", s1.nilai);
    printf("\n");
    printf("Nama: %s\n", s2.nama);
    printf("Absen: %d\n", s2.absen);
    printf("Nilai: %.2f\n", s2.nilai);

    return 0;
}

