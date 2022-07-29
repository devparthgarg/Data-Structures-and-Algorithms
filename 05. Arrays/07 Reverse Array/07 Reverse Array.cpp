#include<bits/stdc++.h>
using namespace std;

//Time: O(n)
void reverse(int a[], int n)
{
    if (n <= 1)
    {
        return ;
    }

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
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
    reverse(arr, n);
    display(arr, n);
    return 0;
}