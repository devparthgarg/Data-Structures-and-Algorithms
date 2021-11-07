#include<bits/stdc++.h>
using namespace std;

//for sorted arrays only
int binarySearch(int a[], int n, int key)//time comp. O(logn) ; space comp. O(1)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(a) / sizeof(int);
    int key = 50;

    cout << binarySearch(a, n, key);
    return 0;
}