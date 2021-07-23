#include<bits/stdc++.h>
using namespace std;

int maxConsecutive1(int *a, int n) //time comp. O(n)
{
    int res = 0, curr = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            curr = 0;
        }
        else
        {
            curr++;
            res = max(res, curr);
        }
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

    cout << maxConsecutive1(arr, n) << endl;
    return 0;
}
