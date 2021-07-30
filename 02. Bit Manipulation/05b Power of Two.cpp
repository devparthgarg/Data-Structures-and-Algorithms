#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n)//time comp. O(1)
{
    if (n == 0 or n == 1)
    {
        return false;
    }

    return (n & (n - 1)) == 0; //Brian Kerningham Algorithm
}

int main()
{
    int n = 16;

    cout << powerOfTwo(n);
    return 0;
}