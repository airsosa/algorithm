#include "array.h"
#include <stdio.h>

#define INDEX 7

void print_array(int *arr, int l, int r);
void merge_sort(int arr[], int l, int r);
void merge(int *arr, int l, int m, int r);

int main(void) {
    printf("input array:\n");
    print_array(arr, 0, INDEX);
    merge_sort(arr, 0, INDEX);
    printf("sorted array:\n");
    print_array(arr, 0, INDEX);
}

void print_array(int *arr, int l, int r) {
    for (int i = l; i <= r; i++)
        printf("%i, ", arr[i]);
    printf("\n");
}

void merge_sort(int arr[], int l, int r) {
    if (l >= r)
        return;
    else {
        int m = (l + r)/2;
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void merge(int *arr, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // create temp arrays
    int l_arr[n1], r_arr[n2];

    // copy elements from main array to temps
    for (i = 0; i < n1; i++)
        l_arr[i] = arr[i + l];
    for (j = 0; j < n2; j++)
        r_arr[j] = arr[j + m + 1];
    
    // temp arrays into main array
    i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (l_arr[i] < r_arr[j])
            arr[k] = l_arr[i++];
        else
            arr[k] = r_arr[j++];
        k++;
    }

    // copy remining elements into main array
    while (i < n1)
        arr[k++] = l_arr[i++];
    while (j < n2)
        arr[k++] = r_arr[j++];
}