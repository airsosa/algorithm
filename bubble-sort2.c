#include <stdio.h>
#include <stdbool.h>
#include "array.h"

void print_arr(int arr[], int len);
void sort(int *arr, int len);

int main(void) {
    printf("Input array:\n");
    print_arr(arr, ARR_LEN);
    sort(arr, ARR_LEN);
    print_arr(arr, ARR_LEN);
}

void print_arr(int arr[], int len) {
    for (int i = 0; i < len; i++)
        printf("%i ", arr[i]);
    
    printf("\n");
}

void sort(int *arr, int len) {
    printf("sorting...\n");
    bool swap;
    int temp, iter = 1;
    do {
        swap = false;
        for (int i = 0; i < len - iter; i++) {
            if (arr[i] > arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i +1];
                arr[i + 1] = temp;
                swap = true;
            }
        }
        iter++;
    } while (swap);
}