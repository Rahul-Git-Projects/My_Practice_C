#include <stdio.h>

void array_display(int *arr, int n)
{
    int *original_ptr = arr;
    for (; arr < original_ptr + n; arr++)
        printf("%d ", *arr);
    return;
}

int main(void)
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    array_display(array, 10);
    return 0;
}