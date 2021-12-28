#include<bits/stdc++.h>
using namespace std;

//Time: O(n*logn)
//Space: O(n)

int removeDuplicate(int a[], int n)
{
    sort(a, a + n);

    int temp[n];
    temp[0] = a[0];
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != a[i])
        {
            temp[res] = a[i];
            res++;
        }
    }

    for (int i = 0; i < res; i++)
    {
        a[i] = temp[i];
    }

    return res;
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {3, 2, 4, 1, 4, 5, 2};
    int n = sizeof(arr) / sizeof(int);

    display(arr, n);
    n = removeDuplicate(arr, n);
    display(arr, n);

    return 0;
}