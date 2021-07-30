#include<bits/stdc++.h>
using namespace std;

void twoUnique(int *a, int n) //time comp. O(n^2)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }

        if (count % 2 != 0)
        {
            cout << a[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {3, 4, 3, 4, 5, 4, 4, 6, 7, 7};
    int n = sizeof(arr) / sizeof(int);

    twoUnique(arr, n);
    return 0;
}