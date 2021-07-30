#include<bits/stdc++.h>
using namespace std;

void twoUnique(int *a, int n) //time comp. O(n)
{
    //1. find XOR of all elements
    int XOR = 0;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR ^ a[i];
    }

    //2. find rightmost setbit
    int setbit = XOR & ~(XOR - 1);

    //3. divide whole array into 2 parts - one part having above setbit(1) and other having 0
    int p1 = 0, p2 = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i]&setbit) != 0)
        {
            p1 = p1 ^ a[i];
        }
        else
        {
            p2 = p2 ^ a[i];
        }
    }

    cout << p1 << " " << p2;
}

int main()
{
    int arr[] = {3, 4, 3, 4, 5, 4, 4, 6, 7, 7};
    int n = sizeof(arr) / sizeof(int);

    twoUnique(arr, n);
    return 0;
}