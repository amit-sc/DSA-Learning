//! ********** Merge two Sorted Array **********

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
    cout << endl;
}

// Merge two sorted array
struct Array *Merge(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k] = arr1->A[i];
            k++;
            i++;
        }
        else
        {
            arr3->A[k] = arr2->A[j];
            k++;
            j++;
        }
    }

    for (; i < arr1->length; i++)
    {
        arr3->A[k] = arr1->A[i];
        k++;
    }

    for (; j < arr2->length; j++)
    {
        arr3->A[k] = arr2->A[j];
        k++;
    }

    arr3->length = arr1->length + arr2->length;
    arr3->size = 20;

    return arr3;
}

int main()
{
    struct Array arr1 = {{1, 3, 7, 9, 14}, 10, 5};
    struct Array arr2 = {{2, 3, 5, 10, 13}, 10, 5};

    struct Array *arr3;
    arr3 = Merge(&arr1, &arr2);

    Display(*arr3);
    return 0;
}