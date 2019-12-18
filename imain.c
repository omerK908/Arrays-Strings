#include <stdio.h>
#include "isort.h"
int main(){
    int arr[SIZE] = {0};
    int x = 0;
    for (size_t i = 0; i < SIZE; i++)
    {
        scanf("%d", &x);
        *(arr + i) = x;
    }
    insertion_sort(arr, SIZE);    
}