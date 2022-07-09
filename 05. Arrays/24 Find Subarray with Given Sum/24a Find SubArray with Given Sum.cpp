#include<bits/stdc++.h>
using namespace std;

/*
given an array(unsorted and non-negative integers)
and a integer k find the maximum
sum of k consecutive elements
*/

//Time: O(n^2)
bool subArray(int a[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum = currSum + a[j];
            if (currSum == sum)
            {
                return true;
            }
        }
    }

    return false;
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

    int sum;
    cin >> sum;

    cout << subArray(a, n, sum);
    return 0;
}