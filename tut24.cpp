//! ********** Set Operations on Arrays ********** 

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

// Union of two Arrays
struct Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k] = arr1->A[i];
            k++;
            i++;
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            arr3->A[k] = arr2->A[j];
            k++;
            j++;
        }
        else
        {
            arr3->A[k] = arr1->A[i];
            k++;
            i++;
            j++;
        }
    }

    for (; i < arr1->length; i++)
    {
        arr3->A[k] = arr1->A[i];
        k++;
    }

    for (; j < arr2->length; j++)
    {
        arr3->A[k] = arr2->A[j];
        k++;
    }

    arr3->length = k;
    arr3->size = 20;

    return arr3;
}

// Intersection of two arrays
struct Array *Intersection(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            i++;
        else if (arr2->A[j] < arr1->A[i])
            j++;
        else
        {
            arr3->A[k] = arr1->A[i];
            i++;
            j++;
            k++;
        }
    }

    arr3->length = k;
    arr3->size = 20;

    return arr3;
}

// Set Difference of two arrays (A-B)
struct Array *setDifference(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k] = arr1->A[i];
            k++;
            i++;
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }

    for (; i < arr1->length; i++)
    {
        arr3->A[k] = arr1->A[i];
        k++;
    }

    arr3->length = k;
    arr3->size = 20;

    return arr3;
}

int main()
{
    struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    struct Array arr2 = {{3, 6, 7, 15, 20}, 10, 5};

    struct Array *arr3;
    arr3 = Union(&arr1, &arr2); // Union of two arrays
    Display(*arr3);

    struct Array *arr4;
    arr4 = Intersection(&arr1, &arr2); // Intersection of two arrays
    Display(*arr4);

    struct Array *arr5;
    arr5 = setDifference(&arr1, &arr2); // Set Difference of two arrays
    Display(*arr5);
    return 0;
}