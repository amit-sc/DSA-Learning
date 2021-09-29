//! ********** Sum of N natural number using Recursion ********** 

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return n;
    }
    else
    {
        return sum(n - 1) + n;
    }
}

int main()
{
    cout << sum(7);
    return 0;
}