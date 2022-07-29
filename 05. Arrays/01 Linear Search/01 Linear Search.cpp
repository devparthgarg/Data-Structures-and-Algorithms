#include<bits/stdc++.h>
using namespace std;

//Time: O(n) for unsorted array
//Time: O(logn) for sorted array (Binary Search)
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(int);
    int key = 1;

    cout << linearSearch(arr, n, key) << endl;
    return 0;
}
