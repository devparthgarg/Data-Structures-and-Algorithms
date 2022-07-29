#include<bits/stdc++.h>
using namespace std;

/*
given an array and a integer k find the maximum
sum of k consecutive elements
*/

//time: O(n*n)
int maxKSum(int a[], int n, int k)
{
    int maxSum = 0;
    int currSum = 0;

    if (n < k)
    {
        return -1;
    }

    if (n == k)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        return sum;
    }

    for (int i = 0; i <= n - k; i++)
    {
        currSum = 0;
        for (int j = i; j < i + k; j++)
        {
            currSum += a[j];
        }
        if (currSum > maxSum)
        {
            maxSum = currSum;
        }
    }

    return maxSum;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;

    cout << maxKSum(a, n, k);
    return 0;
}