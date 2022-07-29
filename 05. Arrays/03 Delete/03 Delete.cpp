#include<bits/stdc++.h>
using namespace std;

//Time: O(n) delete at begin
//Time: O(1) delete at end
int del(int arr[], int n, int key)
{
    int idx, i;
    for (i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            idx = i;
            break;
        }
    }

    if (i == n)
    {
        return n;
    }

    for (int i = idx; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    return n;
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return ;
}

int main()
{
    int arr[] = {3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(int);
    int key = 4;

    display(arr, n);
    n = del(arr, n, key);
    display(arr, n);
    return 0;
}