#include<bits/stdc++.h>
using namespace std;

//Time: O(n^2)
void moveZeros(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] != 0)
                {
                    swap(a[i], a[j]);
                    break;
                }
            }
        }
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
    int arr[] = {0, 3, 2, 1, 0, 4, 7, 0, 2};
    int n = sizeof(arr) / sizeof(int);

    display(arr, n);
    moveZeros(arr, n);
    display(arr, n);

    return 0;
}
