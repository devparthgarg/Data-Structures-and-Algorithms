#include<bits/stdc++.h>
using namespace std;

//Iterative Method using Binary Search
int lastOcc(int a[], int n, int key) //time comp. O(logn) ; space comp. O(1)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] > key)
        {
            high = mid - 1;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == (n - 1) or a[mid + 1] != a[mid])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }

    return -1;
}

int main()
{
    int a[] = {10, 20, 30, 30, 30, 30, 40, 50, 60};
    int n = sizeof(a) / sizeof(int);
    int key = 30;

    cout << lastOcc(a, n, key);
    return 0;
}