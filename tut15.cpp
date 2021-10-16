//! ********** Array Representation and Operations **********

#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    cout << "\nArray :: ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << ' ';
    }
}

int main()
{
    struct Array arr;
    int n;

    cout << "Enter size of the Array :: ", cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    cout << "Enter no of elements :: ", cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "element " << i << " :: ", cin >> arr.A[i];
    }
    arr.length = n;

    Display(arr);

    return 0;
}