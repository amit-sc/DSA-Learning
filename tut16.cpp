//! ********** Append and Insert in Array **********

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

// Display an Array
void Display(struct Array arr)
{
    cout << "\n\nArray :: ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << ' ';
    }
}

// Append in an Array
void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length] = x;
        arr->length++;
    }
}

// Insert in a Array
void Insert(struct Array *arr, int index, int x)
{
    if (index > 0 && index <= arr->size)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int main()
{
    struct Array arr = {{2, 4, 7, 5, 9}, 10, 5};

    Display(arr);
    Append(&arr, 43);
    Append(&arr, 32);
    Display(arr);
    Insert(&arr, 3, 54);
    Display(arr);
    
    return 0;
}