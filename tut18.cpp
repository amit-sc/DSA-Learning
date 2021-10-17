// ! ********** Linear Serach **********

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

// Linear Search in Array
int linearSearch(struct Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            return i;
        }
    }
    return -1;
}

// Improving Linear Search by Transposition
int linearSearchT(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            if (i != 0)
                swap(arr->A[i], arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}

// Improving Linear Search by "Move to Front" method
int linearSearchMF(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            if (i != 0)
                swap(arr->A[i], arr->A[0]);
            return i;
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{3, 6, 1, 2, 5}, 10, 5};

    cout << linearSearch(arr, 5) << endl;
    Display(arr);

    cout << linearSearchT(&arr, 2) << endl;
    Display(arr);

    cout << linearSearchMF(&arr, 1) << endl;
    Display(arr);

    return 0;
}