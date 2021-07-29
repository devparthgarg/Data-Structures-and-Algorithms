#include<bits/stdc++.h>
using namespace std;

/*
Prime Factors :
Set of prime numbers which when together
multiplied form the original number
eg: n=12 ; output : 2 2 3
eg: n=13 : output : 13
*/

//Efficient Solution
void primeFactors(int n)//time comp. O(sqrt(n))
{
    if (n <= 1)
    {
        return ;
    }

    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

    if (n > 1)
    {
        cout << n;
    }
}

int main()
{
    int n;
    cin >> n;

    primeFactors(n);
    return 0;
}