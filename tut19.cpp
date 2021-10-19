//! ********** Binary Search **********

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

// Binary Search in Array
int binarySearch(struct Array arr, int key)
{
    int low, high, mid;
    low = 0;
    high = arr.length - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    cout << binarySearch(arr, 5) << endl;

    return 0;
}