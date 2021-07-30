#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, k = 3;

    int mask = n >> (k - 1);

    /*
    explaination :
    5 in binary is 101
    we make a mask which in binary is 001
    take and of 1 with mask , 1 if bit is set else 0
    */

    if (mask & 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}