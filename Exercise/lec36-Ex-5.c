#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverse_arr(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        swap((arr + i), (arr + (size - i - 1)));
    }
}
int main()
{
    int arr[] = {0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50}, size = 11;
    print_arr(arr, size);
    reverse_arr(arr, size);
    print_arr(arr, size);
    return 0;
}