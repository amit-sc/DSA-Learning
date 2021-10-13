#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);
        cout << n << ' ';
    }
}

void fun2(int n)
{
    if (n > 0)
    {
        cout << n << ' ';
        fun2(n - 1);
    }
}

int main()
{
    int x = 3;
    fun(3);
    fun2(3);
    
    return 0;
}