//! ********** Taylor Series using Horner's rule **********

#include <iostream>
using namespace std;

// Recursive
double e(int x, int n)
{
    static double s = 1;
    if (n == 0)
        return s;

    s = 1 + x * s / n; // (x/n)*s == x*s/n but in (x/n)*s we have to typecast
    return e(x, n - 1);
}

// Iterative
double e_iter(int x, int n)
{
    double s = 1;
    while (n > 0)
    {
        s = 1 + x * s / n;
        n--;
    }
    return s;
}

int main()
{
    cout << e(2, 10) << endl;
    cout << e_iter(2, 10) << endl;
    return 0;
}