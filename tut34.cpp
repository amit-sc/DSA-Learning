//! ********** finding MAX and MIN in a single scan **********

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

int MAX(struct Array arr)
{
    int m = 0;
    for (int i = 0; i < arr.length; i++)
    {
        m = max(m, arr.A[i]);
    }
    return m;
}

int MIN(struct Array arr)
{
    int m = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        m = min(m, arr.A[i]);
    }
    return m;
}

int main()
{
    struct Array arr = {{1, 5, 3, 6, 2, 4, 8, 5, 9, 7}, 10, 10};
    cout << "\nMAX element :: " << MAX(arr) << endl;
    cout << "\nMIN element :: " << MIN(arr) << endl;
    
    return 0;
}