#include<bits/stdc++.h>
using namespace std;

//for sorted arrays only
int binarySearch(int a[], int low, int high, int key)//time comp. O(logn) ; space comp. O(logn)
{
    //base case
    if (low > high)
    {
        return -1;
    }

    //recursive case
    int mid = (low + high) / 2;
    if (a[mid] == key)
    {
        return mid;
    }
    else if (a[mid] > key)
    {
        return binarySearch(a, low, mid - 1, key);
    }
    else
    {
        return binarySearch(a, mid + 1, high, key);
    }
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(a) / sizeof(int);
    int key = 50;

    cout << binarySearch(a, 0, n - 1, key);
    return 0;
}