//! ********** Head, Tail & Tree Recursion **********

#include <iostream>
using namespace std;

// Head Recursion
void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1); // function called first
        cout << n << ' ';
    }
}

// Tail Recursion
void fun2(int n)
{
    if (n > 0)
    {
        cout << n << ' ';
        fun(n - 1); // function called last
    }
}

// Tree Recursion
void fun3(int n)
{
    if (n > 0)
    {
        cout << n << ' ';
        fun(n - 1); // more than one function called
        fun(n - 1);
    }
}

int main()
{
    cout << "\n\nHead Recursion :: ", fun(3);
    cout << "\n\nTail Recursion :: ", fun2(3);
    cout << "\n\nTree Recursion :: ", fun3(3);
    return 0;
}