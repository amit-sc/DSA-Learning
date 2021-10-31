//! ********** Find multiple Missing Element from an array **********

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

// Find multiple missing element from an array
void MulMissingElement(struct Array *arr)
{
    int diff = arr->A[0] - 0;

    cout << "\n\nMissing Elements :: ";
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i] - i != diff)
        {
            while (diff < arr->A[i] - i)
            {
                cout << i + diff << ' ';
                diff++;
            }
        }
    }
}

int main()
{
    struct Array arr = {{6, 7, 8, 9, 11, 12, 15, 16, 17}, 10, 9};
    MulMissingElement(&arr);

    return 0;
}