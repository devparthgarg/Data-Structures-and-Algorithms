#include<bits/stdc++.h>
using namespace std;

/*
Prime Number :
A prime number is a whole number greater than 1
whose only factors are 1 and itself.
*/

/*
Fact :
any prime no. except 2 and 3 can be written
in form of (6n+1) or (6n-1)
*/

//Naive Solution
bool isPrime(int n)//time comp. O(n)
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

int main()
{
    int n;
    cin >> n;

    cout << isPrime(n) << endl;
    return 0;
}