#include<bits/stdc++.h>
using namespace std;

//Time: O(n) insert at begin
//Time: O(1) insert at end
int insert(int arr[], int n, int key, int pos)
{
    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = key;
    n++;

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
    int key = 6;
    int pos = 3;

    display(arr, n);
    n = insert(arr, n, key, pos);
    display(arr, n);

    return 0;
}
