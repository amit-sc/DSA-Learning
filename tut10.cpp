#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

// Normal nCr formula
int nCr(int n, int r)
{
    int num = fact(n);
    int den = fact(r) * fact(n - r);

    return num / den;
}

// nCr using pascal triangle method
int NCR(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    else
    {
        return NCR(n - 1, r - 1) + NCR(n - 1, r);
    }
}

int main()
{
    cout << nCr(4, 2) << endl;
    cout << NCR(5, 2) << endl;

    return 0;
}