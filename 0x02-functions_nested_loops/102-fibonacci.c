#include <stdio.h>

void print_fibonacci_numbers(int n) {
    int first = 1, second = 2, next, i;

    printf("%d, %d", first, second);

    for (i = 3; i <= n; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }
}

int main() {
    print_fibonacci_numbers(50);
    printf("\n");

    return 0;
}
