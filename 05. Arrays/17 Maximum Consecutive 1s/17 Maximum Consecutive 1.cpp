#include<bits/stdc++.h>
using namespace std;

//time: O(n)
int maxConsecutive1(int *a, int n) 
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
    int arr[]={1,0,1,1,1,1,0,1,1};
    int n=sizeof(arr)/sizeof(int);

    cout << maxConsecutive1(arr, n) << endl;
    return 0;
}
