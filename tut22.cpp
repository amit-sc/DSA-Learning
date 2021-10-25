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

// check if Array is Sorted
bool isSorted(struct Array arr)
{
    for (int i = 0; i < arr.length - 2; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return false;
    }
    return true;
}

// Inserting an element in sorted array
void insert(struct Array *arr, int ele)
{
    if (arr->length == arr->size)
    {
        return;
    }

    int p = arr->length - 1;
    while (p >= 0 && arr->A[p] > ele)
    {
        arr->A[p + 1] = arr->A[p];
        p--;
    }
    arr->A[p + 1] = ele;
    arr->length++;
}

// Rearrange positive & negative in array
void REarrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;

    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
        {
            swap(arr->A[i], arr->A[j]);
        }
    }
}

int main()
{
    struct Array arr = {{1, 4, 6, 8, 7, 9, 13}, 10, 7};
    cout << isSorted(arr) << endl;

    struct Array Arr = {{2, 5, 6, 7, 9}, 10, 5};
    insert(&Arr, 8);
    Display(Arr);

    struct Array arr2 = {{1, -4, 6, 8, -7, -9, 13}, 10, 7};
    REarrange(&arr2);
    Display(arr2);

    return 0;
}