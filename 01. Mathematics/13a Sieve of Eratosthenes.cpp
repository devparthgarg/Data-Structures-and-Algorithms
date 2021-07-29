#include<bits/stdc++.h>
using namespace std;

//Naive Solution
void sieve(int n)//time comp. O(n*logn)
{
    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    sieve(n);
    return 0;
}