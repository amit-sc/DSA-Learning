//! ********** Delete Operation on Array **********

#include <iostream>
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

// Delete an indexed element in array
void Delete(struct Array *arr, int index)
{
    if (index >= 0 && index < arr->length)
    {
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
    }
}

int main()
{
    struct Array arr = {{2, 3, 4, 7, 5}, 10, 5};

    Display(arr);
    Delete(&arr, 2);
    Display(arr);

    return 0;
}