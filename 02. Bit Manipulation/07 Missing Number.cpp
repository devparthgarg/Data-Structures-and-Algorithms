#include<bits/stdc++.h>
using namespace std;

/*
Given an array from 1 to n with one number missing
find that missing number
*/

int missing(int *a, int n) //time comp. O(n)
{
    int m = n + 1;
    int val = 1;

    int aux[m];
    for (int i = 0; i < m; i++)
    {
        aux[i] = val;
        val++;
    }

    int n1 = 0, n2 = 0;

    for (int i = 0; i < n; i++)
    {
        n1 = n1 ^ a[i];
    }

    for (int i = 0; i < m; i++)
    {
        n2 = n2 ^ aux[i];
    }

    return (n1 ^ n2);
}

int main()
{
    int arr[] = {1, 3, 5, 4, 2, 7};
    int n = sizeof(arr) / sizeof(int);

    cout << missing(arr, n);
    return 0;
}