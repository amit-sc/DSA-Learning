//! ********** 2D Array **********

#include <iostream>
using namespace std;

int main()
{
    //! Declaration of 2D array can be done by multiple methods : -

    // Method - 1 : Declared Completely in Stack
    int A[3][5];

    // Method - 2 : Declared Partial in stack & Partial in Heap
    int *B[3];
    B[0] = new int[5];
    B[1] = new int[5];
    B[2] = new int[5];

    // Method - 3 : Declared completely in Heap
    int **C;
    C = new int *[3]; //  '*'  is added
    C[0] = new int[5];
    C[1] = new int[5];
    C[2] = new int[5];

    cout << "Enter array :: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> C[i][j];
        }
    }

    cout << "\nArray :: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << C[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}