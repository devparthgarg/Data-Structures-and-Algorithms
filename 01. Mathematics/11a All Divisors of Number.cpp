#include<bits/stdc++.h>
using namespace std;

/*
Divisor :
A number which divides another number.
eg: n=12 ; output : 1 2 3 4 6 12
eg: n=13 : output : 1 13
*/

//Naive Solution
void allDivisors(int n)//time comp. : O(n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;

    allDivisors(n);
    return 0;
}