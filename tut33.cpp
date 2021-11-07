//! ********** find a pair with sum k in Sorted array **********

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

// find a pair of element with sum k in sorted array
void findPairSorted(struct Array arr, int key)
{
    int low = 0;
    int high = arr.length - 1;

    while (high > low)
    {
        if (arr.A[low] + arr.A[high] == key)
        {
            cout << arr.A[low] << " + " << arr.A[high] << " = " << key << endl;
            low++;
            high--;
        }
        else if (arr.A[low] + arr.A[high] > key)
            high--;
        else
            low++;
    }
}

int main()
{
    struct Array arr = {{1, 3, 4, 5, 6, 8, 9, 10, 12, 14}, 10, 10};
    findPairSorted(arr, 10);

    return 0;
}