#include<bits/stdc++.h>
using namespace std;

//Time: O(n)
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

int main()
{
    int arr[] = {3, 2, 4, 5, 1};
    int n = sizeof(arr) / sizeof(int);

    cout << largest(arr, n) << endl;
    return 0;
}