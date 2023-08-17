#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
// Linear Search
//  int LinearSearch(struct Array arr, int key)
//  {
//      int i;
//      for (i = 0; i < arr.length; i++)
//      {
//          if (key == arr.A[i])
//              return i;
//      }
//      return -1;
//  }

// Linear Search - Transposition
// int LinearSearch(struct Array *arr, int key)
// {
//     int i;
//     for (i = 0; i < arr->length; i++)
//     {
//         if (key == arr->A[i])
//         {
//             swap(&arr->A[i], &arr->A[i-1]);
//             return i;
//         }
//     }
//     return -1;
// }

// Linear Search - Move to Front
int LinearSearch(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6, 9, 8, 12}, 10, 8};
    // printf("%d\n", LinearSearch(arr1, 14));
    printf("%d", LinearSearch(&arr1, 12));
    Display(arr1);
    return 0;
}