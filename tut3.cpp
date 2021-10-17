//! ********** Types of Recursion **********
/*
Head Recursion
Tail Recursion
Tree Recursion
Indirect Recursion
Nested Recursion
*/

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

// Indirect Recursion
void fun4a(int n); // declaration
void fun4b(int n); // declaration

void fun4a(int n)
{
    if (n > 0)
    {
        cout << n << ' ';
        fun4b(n - 1);
    }
}

void fun4b(int n)
{
    if (n > 1)
    {
        cout << n << ' ';
        fun4a(n / 2);
    }
}

// Nested Recursion
int fun5(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else
    {
        return fun5(fun5(n + 11));
    }
}

int main()
{
    cout << "\n\nHead Recursion :: ", fun(3);
    cout << "\n\nTail Recursion :: ", fun2(3);
    cout << "\n\nTree Recursion :: ", fun3(3);
    cout << "\n\nIndirect Recursion :: ", fun4a(20);
    cout << "\n\nNested Recursion :: ", cout << fun5(95);
    
    return 0;
}