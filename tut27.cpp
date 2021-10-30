//! ********** Finding a missing elelment from a Sorted Array **********

#include <iostream>
using namespace std;

class Array
{
    int *A;
    int size;
    int length;

public:
    Array()
    {
        size = 10;
        length = 0;
        A = new int[size];
    }

    Array(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }

    ~Array()
    {
        delete[] A;
    }

    void Input()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "\nEnter A[" << i << "] :: ", cin >> A[i];
            length++;
        }
    }

    void Input(int len)
    {
        for (int i = 0; i < len; i++)
        {
            cout << "\nEnter A[" << i << "] :: ", cin >> A[i];
            length++;
        }
    }

    void Display()
    {
        cout << "\n\nArray :: ";
        for (int i = 0; i < length; i++)
            cout << A[i] << ' ';
    }

    void MissingElement();
};

// finding a missing element in sorted array
void Array::MissingElement()
{
    int diff = A[0] - 0;
    for (int i = 0; i < length; i++)
    {
        if (A[i] - i != diff)
        {
            cout << "\n\nMissing element found. Element is " << i + diff << endl;
            return;
        }
    }
}

int main()
{
    Array a1(11);
    a1.Input(5);
    a1.Display();
    a1.MissingElement();

    return 0;
}