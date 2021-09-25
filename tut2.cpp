#include <iostream>
using namespace std;

int fun(int n)
{
    if (n > 0)
    {
        return fun(n - 1) + n; // case 1
    }
    return 0;
}

int fun2(int n)
{
    static int x = 0; // static variable
    if (n > 0)
    {
        x++;
        return fun2(n - 1) + x; // case 2
    }
    return 0;
}

int main()
{
    int n = 5;
    cout << fun(n) << endl;
    cout << fun2(n) << endl; // due to static variable output is 25
    cout << fun2(n) << endl; // now it become 50
    return 0;
}