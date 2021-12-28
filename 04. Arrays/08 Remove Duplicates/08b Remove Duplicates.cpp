#include<bits/stdc++.h>
using namespace std;

//Time: O(n*logn)
//Space: O(1)

int removeDuplicate(int a[], int n)
{
    sort(a, a + n);

    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            a[res] = a[i];
            res++;
        }
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
    int arr[] = {3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(int);

    display(arr, n);
    n = removeDuplicate(arr, n);
    display(arr, n);

    return 0;
}