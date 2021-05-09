#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: ./fibonacci n (where n is a positive integer)\n\n");
        return 1;
    }

    int n = atoi(argv[1]);

    printf("Fibonacci %i: %i\n", n, fibonacci(n));
}

int fibonacci(int n) {
    if (n < 1)
        return 0;
    else if (n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
    
}