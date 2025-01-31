#include <stdio.h>
#include <stdlib.h>

int *new_int_arrray(int size)
{
    int *new_arr = (int *)malloc(size * sizeof(int)); // Alocation of memory
    if (new_arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    return new_arr;
}

int main()
{
    int *arr_of_6 = new_int_arrray(6);
    arr_of_6[0] = 1;
    arr_of_6[1] = 2;
    arr_of_6[2] = 3;
    arr_of_6[3] = 4;
    arr_of_6[4] = 5;
    arr_of_6[5] = 6;
    printf("%d\n", arr_of_6[3]);
    free(arr_of_6);
}