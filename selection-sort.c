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
    int min, pos, temp;
    bool swap;
    for (int i = 0; i < len; i++) {
        min = arr[i];
        swap = false;
        for (int j = i + 1; j < len; j++) {
            if (arr[j] < min) {
                min = arr[j];
                pos = j;
                swap = true;
            }

        }
        if (swap) {
            temp = arr[i];
            arr[i] = min;
            arr[pos] = temp;
        }
    }
}