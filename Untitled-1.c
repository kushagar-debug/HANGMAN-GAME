#include <stdio.h>

void decToBinary(int n) {
    int binary[32], i = 0;
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) printf("%d", binary[j]);
    printf("\n");
}

void decToOctal(int n) {
    printf("Octal: %o\n", n);
}

void decToHex(int n) {
    printf("Hexadecimal: %X\n", n);
}

int main() {
    int num, choice;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Convert to:\n1. Binary\n2. Octal\n3. Hexadecimal\nChoice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: decToBinary(num); break;
        case 2: decToOctal(num); break;
        case 3: decToHex(num); break;
        default: printf("Invalid choice\n");
    }

    return 0;
}
