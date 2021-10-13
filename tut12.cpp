//! ********** Array & Methods of Declaration **********

#include <iostream>
using namespace std;

int main()
{
    //! Array can be declared by many ways -->
    int A[5];                   //  Method 1
    int B[5] = {2, 4, 6, 5, 9}; //  Method 2
    int C[5] = {2, 4};          //  Method 3
    int D[5] = {0};             //  Method 4
    int E[] = {2, 4, 6, 5, 9};  //  Method 5

    // int n = 5;
    // int F[n];

    int *p = new int[5];
    delete[] p;

    return 0;
}