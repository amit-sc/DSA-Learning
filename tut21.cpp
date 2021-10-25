//! ********** Reverese an Array **********

#include <iostream>
using namespace std;

// Reverse an array by 2 pointer algo
void reverseArray(int arr[], int size)
{
    int p = 0;
    int q = size - 1;

    while (p <= q)
    {
        swap(arr[p], arr[q]);
        p++;
        q--;
    }
}

int main()
{
    int arr[7] = {2, 4, 5, 7, 3, 1, 8};
    reverseArray(arr, 7);

    for (int i : arr)
    {
        cout << i << ' ';
    }
    return 0;
}