#include<bits/stdc++.h>
using namespace std;

//Time: O(n) (one traversal)
int secondLargest(int arr[], int n)
{
    int greatest, secondGreatest;
    greatest = secondGreatest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > greatest)
        {
            secondGreatest = greatest;
            greatest = arr[i];
        }
        if (arr[i]<greatest and arr[i]>secondGreatest)
        {
            secondGreatest = arr[i];
        }
    }

    return secondGreatest;
}

int main()
{
    int arr[] = {3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(int);

    cout << secondLargest(arr, n) << endl;
    return 0;
}