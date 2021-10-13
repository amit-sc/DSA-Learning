//! ********** Static vs Dynammic Array **********

#include <iostream>
using namespace std;

int main()
{
    // Static Array - created in stack
    int Arr[5];

    // Dynammic Array - created in Heap
    int *p;
    p = new int[5];

    //! increase the size of an Array
    int *A = new int[5]; // array of size 5
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    A[3] = 4;
    A[4] = 5;

    //! increase the size of array to 10 size.

    // ---------------------------------------- Step 1
    int *B = new int[10];

    // ---------------------------------------- Step 2
    for (int i = 0; i < 5; i++)
    {
        A[i] = B[i];
    }

    // ---------------------------------------- Step 3
    delete[] A;

    // ---------------------------------------- Step 4
    A = B;
    B = NULL;

    for (int i = 0; i < 10; i++)
    {
        A[i] = i + 1;
    }

    for (int j = 0; j < 10; j++)
    {
        cout << A[j] << ' ';
    }

    return 0;
}