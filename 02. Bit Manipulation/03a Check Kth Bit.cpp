#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, k = 3;

    int mask = 1 << (k - 1);

    /*
    explaination :
    5 in binary is 101
    we make a mask which in binary is 100
    take "and" of it if bit is set then 1 else 0
    */

    if (n & mask)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}