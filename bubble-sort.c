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
    bool swap = false;
    int temp;
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
                swap = true;
            }
        }
        if (!swap)
            break;
    }
}