#include<bits/stdc++.h>
using namespace std;

int largest(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}

//Time: O(n) (two traversals)
int secondLargest(int arr[], int n)
{
    int max = largest(arr, n);
    int res = INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        if (res < arr[i] and arr[i] != max)
        {
            res = arr[i];
        }
    }

    if(res==INT_MIN)
    {
        return -1;
    }

    return res;
}

int main()
{
    int arr[] = {3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(int);

    cout << secondLargest(arr, n) << endl;
    return 0;
}