//! ********** Get(), Set(), Max(), Min(), Sum(), Avg() Operations on Array ********** 

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

// Display an Array
void Display(struct Array arr)
{
    cout << "\n\nArray :: ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << ' ';
    }
    cout << endl;
}

// Get the element on index of an array
int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}

// Set the element on index of an array
void Set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}

// find the max element of an array
int MAX(struct Array arr)
{
    int m = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        m = max(m, arr.A[i]);
    }
    return m;
}

// find the min element of an array
int MIN(struct Array arr)
{
    int m = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        m = min(m, arr.A[i]);
    }
    return m;
}

// Sum of all the element of an array
int SUM(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    return sum;
}

// Average of all element of an array
int AVG(struct Array arr)
{
    int sum = 0;
    float avg;

    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }

    avg = float(sum) / arr.length;
    return avg;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    cout << Get(arr, 2) << endl;
    Set(&arr, 4, 1);
    Display(arr);

    cout << MAX(arr) << endl;
    cout << MIN(arr) << endl;
    cout << SUM(arr) << endl;
    cout << AVG(arr) << endl;

    return 0;
}