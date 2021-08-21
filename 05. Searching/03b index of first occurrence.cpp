#include<bits/stdc++.h>
using namespace std;

//binary search (iterative)
int firstOcc(int a[], int n, int key) //time comp. O(logn)
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
            if (mid == 0 or a[mid - 1] != a[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
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

    cout << firstOcc(a, n, key);
    return 0;
}