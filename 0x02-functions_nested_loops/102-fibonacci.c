#include <stdio.h>

/** 
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
    int fib1= 1;
    int fib2 = 2;
    int sumFib = fib1 + fib2;

    printf("fib1: %d\nfib2: %d\n", fib1, fib2);
    printf("sumFib=>> %d\n", sumFib);
    while (sumFib <= 4000000)
    {
        fib1 = fib2;
        fib2 = sumFib;
        printf("fib1: %d\nfib2: %d\n", fib1, fib2);
        sumFib = fib1 + fib2;
        printf("sumFib=>> %d\n", sumFib);
    }
    printf("\n");
    return (0);
}
