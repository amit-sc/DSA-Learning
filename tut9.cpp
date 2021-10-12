//! ********** Fibonacci Series in Recursion **********

#include <iostream>
using namespace std;

// Factorial using recursion --- O(2^n)
int rfib(int n)
{
    if (n <= 1)
        return n;
    return rfib(n - 2) + rfib(n - 1);
}

// Factorial using Memoization
int F[10];
int fib(int n)
{

    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = fib(n - 2);

        if (F[n - 1] == -1)
            F[n - 1] = fib(n - 1);

        return F[n - 2] + F[n - 1];
    }
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    cout << fib(6) << endl;
    
    return 0;
}