#include<bits/stdc++.h>
using namespace std;

void twoUnique(int a[], int n)//time comp. O(n)
{
    //1. find xor of array
    int X = 0;

    for (int i = 0; i < n; i++)
    {
        X = X ^ a[i];
    }

    //2. find position of right most set bit in X
    int right_set_bit = X & ~(X - 1);

    //3. divide whole array into 2 parts :
    //a.containing right_set_bit
    //b.not conatining right_set_bit
    int res1 = 0, res2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i]&right_set_bit)
        {
            res1 = res1 ^ a[i];
        }
        else
        {
            res2 = res2 ^ a[i];
        }
    }

    cout << res1 << " " << res2 << endl;
}

int main()
{
    int a[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6};
    int n = sizeof(a) / sizeof(int);

    twoUnique(a, n);
    return 0;
}