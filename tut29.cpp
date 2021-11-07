//! ********** Finding missing elelment from an  Un-Sorted Array **********

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

// Finding Missing element from unsorted array
void MulMissingElement(struct Array *arr)
{
    // step 1 - finding the largest element in Array
    int m = 0;
    for (int i = 0; i < arr->length; i++)
    {
        m = max(m, arr->A[i]);
    }

    // step 2 - Make another array and increment its index according to array element
    int arr2[m] = {0};
    for (int j = 0; j < arr->length; j++)
    {
        arr2[arr->A[j]]++;
    }

    // step 3 - display the missing element
    cout << "\nMissing element in Array :: ";
    for (int k = 1; k < m; k++)
    {
        if (arr2[k] == 0)
            cout << k << ' ';
    }
}

int main()
{
    struct Array arr = {{3, 7, 4, 9, 12, 6, 1, 11, 2, 10}, 10, 10};
    MulMissingElement(&arr);

    return 0;
}