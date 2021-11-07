//! ********** Finding Duplicate element in an unsorted array **********

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

// find duplicate in an unsorted array      --method 1
void findDup(struct Array *arr)
{
    cout << "\nDuplicates in Array :: ";
    for (int i = 0; i < arr->length - 1; i++)
    {
        int count = 1;

        if (arr->A[i] != -1)
        {
            for (int j = i + 1; j < arr->length; j++)
            {
                if (arr->A[i] == arr->A[j])
                {
                    count++;
                    arr->A[j] = -1;
                }
            }
            if (count > 1)
            {
                cout << arr->A[i] << '(' << count << ") ";
            }
        }
    }
}

// find duplicate in an unsorted array      --method 2
void findDupHash(struct Array arr)
{
    // step 1 - finding the largest element in Array
    int MAX = 0;
    for (int i = 0; i < arr.length; i++)
    {
        MAX = max(arr.A[i], MAX);
    }
    
    // step 2 - Make another array and increment its index according to array element
    int arr2[MAX] = {0};
    for (int j = 0; j < arr.length; j++)
    {
        arr2[arr.A[j]]++;
    }

    // step 3 - display the duplicate element
    cout << "\nDuplicate element(s) :: ";
    for (int k = 0; k <= MAX; k++)
    {
        if (arr2[k] > 1)
        {
            cout << k << " ";
        }
    }
}

int main()
{
    struct Array arr = {{8, 3, 6, 4, 6, 5, 6, 8, 2, 7}, 10, 10};
    struct Array arr1 = {{8, 3, 6, 4, 6, 5, 6, 8, 2, 7}, 10, 10};

    findDup(&arr);
    findDupHash(arr1);
    return 0;
}