#include <stdio.h>

void print_to_98(int start) {
    while (start != 98) {
        printf("%d, ", start);
        if (start < 98) {
            start++;
        } else {
            start--;
        }
    }
    printf("%d\n", start);
}

int main() {
    int starting_number;
    printf("Enter a number: ");
    scanf("%d", &starting_number);
    print_to_98(starting_number);
    return 0;
}
