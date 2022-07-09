#include<bits/stdc++.h>
using namespace std;

//Time: O(n*d)
void rotateDspaces(int a[], int n, int d)
{
    d = d % n; //to eliminate extra repeated iterations
    for (int k = 0; k < d; k++)
    {
        int temp = a[0];
        for (int i = 1; i < n; i++)
        {
            a[i - 1] = a[i];
        }
        a[n - 1] = temp;
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
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int d = 3;

    display(arr, n);
    rotateDspaces(arr, n, d);
    display(arr, n);

    return 0;
}