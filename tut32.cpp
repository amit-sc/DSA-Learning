//! ********** find a pair with sum k **********

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

// method 1 :: O(n²)
void findPair(struct Array arr, int key)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        for (int j = i + 1; j < arr.length; j++)
        {
            if (arr.A[i] + arr.A[j] == key)
                cout << arr.A[i] << " + " << arr.A[j] << " = " << key << endl;
        }
    }
}

// method 2 (using HASH TABLE) :: O(n)
void findPairHash(struct Array arr, int key)
{
    // step 1 - finding the largest element in Array
    int MAX = 0;
    for (int i = 0; i < arr.length; i++)
    {
        MAX = max(MAX, arr.A[i]);
    }

    // step 2 - Make another array and increment its index according to array element
    //        - if key element is found print it
    int arr2[MAX] = {0};
    for (int j = 0; j < arr.length; j++)
    {
        int x = key - arr.A[j];

        if (arr2[x] == 1)
        {
            cout << x << " + " << arr.A[j] << " = " << key << endl;
        }
        else
        {
            arr2[arr.A[j]]++;
        }
    }
}

int main()
{
    struct Array arr = {{6, 3, 8, 10, 16, 7, 5, 2, 9, 14}, 10, 10};
    findPair(arr, 10);
    findPairHash(arr, 10);
    return 0;
}