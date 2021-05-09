#include <stdio.h>
#include <stdlib.h>

int collatz(int n);

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: ./collatz n\nn is positve integer\n");
        return 1;
    }
    int n = atoi(argv[1]);
    if (n < 1) {
        printf("number cannot be less than 1\n");
        return 2;
    }

    char *word;
    int steps = collatz(n);

    word = (steps < 2) ? "step" : "steps";

    printf("It takes %i %s for %i to get to 1\n", steps, word, n);
        
}

int collatz(int n) {
    if (n == 1)
        return 0;
    else if (n % 2) {
        // if 0 it is even but returns false else odd as per usage
        //counter++;
        return 1 + collatz(3 * n + 1);
    }
    else
        return 1 + collatz(n / 2);
}