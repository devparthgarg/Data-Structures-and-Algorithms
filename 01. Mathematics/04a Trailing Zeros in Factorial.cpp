#include<bits/stdc++.h>
using namespace std;

//Naive Solution - causes overflow
int countZeroes(int n)//time comp. O(n)
{
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }

    int res = 0;
    while (fact % 10 == 0)
    {
        fact = fact / 10;
        res++;
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    cout << countZeroes(n) << endl;
    return 0;
}