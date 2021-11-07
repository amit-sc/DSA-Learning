//! ********** Finding Duplicate element in a sorted array **********

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

// Find Duplicate element from an Sorted Array      -- method 1
void findDuplicate(struct Array arr)
{
    int last_Dup = 0;

    cout << "\nDuplicate Element(s) :: ";
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] == arr.A[i + 1] && arr.A[i] != last_Dup)
        {
            last_Dup = arr.A[i];
            cout << last_Dup << ' ';
        }
    }
}

// Find Duplicate element from an Sorted Array      -- method 2
void findDuplicateH(struct Array arr)
{
    // step 1 - finding the largest element in Array
    int m = 0;
    for (int i = 0; i < arr.length; i++)
    {
        m = max(m, arr.A[i]);
    }

    // step 2 - Make another array and increment its index according to array element
    int arr3[m] = {0};
    for (int j = 0; j < arr.length; j++)
    {
        arr3[arr.A[j]]++;
    }

    // step 3 - display the duplicate element
    cout << "\nDuplicate element(s) :: ";
    for (int k = 0; k < m; k++)
    {
        if (arr3[k] > 1)
        {
            cout << k << ' ';
        }
    }
}

int main()
{
    struct Array arr = {{3, 6, 8, 8, 10, 12, 15, 15, 15, 20}, 10, 10};
    
    findDuplicate(arr);
    findDuplicateH(arr);

    return 0;
}