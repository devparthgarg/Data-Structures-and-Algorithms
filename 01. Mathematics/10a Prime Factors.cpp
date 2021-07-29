#include<bits/stdc++.h>
using namespace std;

/*
Prime Factors :
Set of prime numbers which when together
multiplied form the original number
eg: n=12 ; output : 2 2 3
eg: n=13 : output : 13
*/

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

//Naive Solution
void primeFactors(int n)//time comp. : O(n*n*logn)
{
    if (isPrime(n))
    {
        cout << n << endl;
        return ;
    }

    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << " ";
                x = x * i;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    primeFactors(n);
    return 0;
}