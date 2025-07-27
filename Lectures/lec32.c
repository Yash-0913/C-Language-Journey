// Passing arrays as function arguments

/* for func3:
we can also pass multidimensional arrays in functions  when we do 2D or more arrays we can't just do int *ptr as it will only pt 1 also we can't do int **ptr
which also doesn't work so we do int (*a)[size] which works
for more information: Cheak this reddit post
https://www.reddit.com/r/C_Programming/comments/t61f7o/question_passing_multidimensional_arrays_to/
*/

#include <stdio.h>
void func2(int *ptr, int size) // in this case we pass base address to pointer so the actual array will also change when we do arithmetic on ptr
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]); // *(ptr+i)
    }
    printf("\n");
}
int func1(int array[], int size) // as the base address of arr is copied in array so changes made in array also changes arr
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += array[i];
    }
    array[i - 1] = 20;
    return sum;
}
void func3(int arr[2][2], int size, int (*ptr)[2], int size1)
{
    arr[1][0] = 10;
    printf("Subtraction of matrix is: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j] - ptr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 10}, size = 6;
    int arr1[2][2] = {{1, 3}, {2, 4}}, size1 = 2;
    int arr2[2][2] = {{2, 4}, {1, 3}}, size2 = 2;
    func2(arr, size);
    printf("%d\n", func1(arr, size));
    func2(arr, size);
    func3(arr1, size1, arr2, size2);

    return 0;
}