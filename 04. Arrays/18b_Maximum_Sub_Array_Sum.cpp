#include<bits/stdc++.h>
using namespace std;

//Kadane's Algo
int maxSubarraySum(int *a, int n) //time comp. O(n)
{
    int res = 0, curr_sum = 0;

    for (int i = 0; i < n; i++)
    {
        curr_sum = max(a[i], curr_sum + a[i]);
        res = max(res, curr_sum);
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxSubarraySum(arr, n);
    return 0;
}
