#include<bits/stdc++.h>
using namespace std;

//binary search (recursive)
int firstOcc(int a[], int l, int h, int key)//time comp. O(logn) ; space comp. O(logn)
{
    //base case
    if (l > h)
    {
        return -1;
    }

    //recursive case
    int mid = (l + h) / 2;
    if (a[mid] > key)
    {
        return firstOcc(a, l, mid - 1, key);
    }
    else if (a[mid] < key)
    {
        return firstOcc(a, mid + 1, h, key);
    }
    else
    {
        if (mid == 0 or a[mid - 1] != a[mid])
        {
            return mid;
        }
        else
        {
            return firstOcc(a, l, mid - 1, key);
        }
    }
}

int main()
{
    int a[] = {10, 20, 30, 30, 30, 30, 40, 50, 60};
    int n = sizeof(a) / sizeof(int);
    int key = 30;

    cout << firstOcc(a, 0, n - 1, key);
    return 0;
}