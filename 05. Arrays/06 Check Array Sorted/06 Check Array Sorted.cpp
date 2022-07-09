#include<bits/stdc++.h>
using namespace std;

//Time: O(n)
bool sorted(int a[], int n)
{
    if (n <= 1)
    {
        return true;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int arr[] = {3, 4, 5, 1, 2};
    int n = sizeof(arr) / sizeof(int);

    cout << sorted(arr, n) << endl;
    return 0;
}