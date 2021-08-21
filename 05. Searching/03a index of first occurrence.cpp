#include<bits/stdc++.h>
using namespace std;

//linear search
int firstOcc(int a[], int n, int key) //time comp. O(n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int a[] = {10, 20, 30, 30, 30, 30, 40, 50, 60};
    int n = sizeof(a) / sizeof(int);
    int key = 30;

    cout << firstOcc(a, n, key);
    return 0;
}