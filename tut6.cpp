#include <iostream>
#include <cmath>
using namespace std;

// method 1
int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return pow(m, n - 1) * m;
    }
}

// method 2 (better than previous)
int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return pow(m * m, n / 2);
    }
    else
    {
        return m * pow(m * m, (n - 1) / 2);
    }
}

int main()
{
    // cout << power(5, 4);
    cout << pow(5, 4);
    return 0;
}