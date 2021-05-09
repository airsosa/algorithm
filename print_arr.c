#include <stdio.h>
#include "array.h"

void print_arr(int arr[], int len) {
    for (int i = 0; i < len; i++)
        printf("%i ", arr[i]);
    
    printf("\n");
}