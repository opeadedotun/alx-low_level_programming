#include <stdio.h>

/**
 * main - prints the first 98 fibonaci sequences
 * Return: 0
*/
void printFibonacciSequence(int n) {
    int a = 1, b = 2, next;
    int count = 2;

    printf("%d, %d", a, b);

    while (count < n) {
        next = a + b;
        printf(", %d", next);

        a = b;
        b = next;
        count++;
    }
}

int main() {
    printFibonacciSequence(98);
    printf("\n");

    return 0;
}
