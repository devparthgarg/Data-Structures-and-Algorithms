#include<bits/stdc++.h>
using namespace std;

//Efficient Solution + Shorter Implementation
void sieve(int n)//time comp. : O(n*log(log(n)))
{
    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    sieve(n);
    return 0;
}