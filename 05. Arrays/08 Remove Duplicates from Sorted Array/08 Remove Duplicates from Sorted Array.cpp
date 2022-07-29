#include<bits/stdc++.h>
using namespace std;

//Time: O(n)
int removeDuplicate(int a[], int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[res-1])
        {
            a[res]=a[i];
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
    int arr[] = {10,20,20,30,30,30};
    int n = sizeof(arr) / sizeof(int);

    display(arr, n);
    n = removeDuplicate(arr, n);
    display(arr, n);

    return 0;
}