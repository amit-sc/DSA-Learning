//! ********** Tower of Hanoi using recursion **********

#include <iostream>
using namespace std;

void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        cout << '(' << A << ',' << C << ')' << endl;
        TOH(n - 1, B, A, C);
    }
}

int main()
{
    cout << "\nTower of Hanoi for 2 Disks :: " << endl;
    TOH(2, 1, 2, 3);

    cout << "\nTower of Hanoi for 3 Disks :: " << endl;
    TOH(3, 1, 2, 3);

    cout << "\nTower of Hanoi for 4 Disks :: " << endl;
    TOH(4, 1, 2, 3);
    return 0;
}