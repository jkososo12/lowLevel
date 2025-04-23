
#include <stdio.h>

int main() {
    int number1, number2;
    char op;

    printf("Masukkan nilai pertama: ");
    scanf("%d", &number1);

    printf("Masukkan operator (+, -, *, /): ");
    scanf(" %c", &op); // Spasi di depan %c penting untuk menghindari membaca newline sebelumnya

    printf("Masukkan nilai kedua: ");
    scanf("%d", &number2);

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", number1, number2, number1 + number2);
            break;
        case '-':
            printf("%d - %d = %d\n", number1, number2, number1 - number2);
            break;
        case '*':
            printf("%d * %d = %d\n", number1, number2, number1 * number2);
            break;
        case '/':
            if (number2 != 0)
                printf("%d / %d = %.2f\n", number1, number2, (float)number1 / number2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Error: Operator tidak valid.\n");
    }

    return 0;
}

