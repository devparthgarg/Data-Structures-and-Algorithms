#include<bits/stdc++.h>
using namespace std;

/*
Prime Number :
A prime number is a whole number greater than 1
whose only factors are 1 and itself.
*/

/*
Divisors always appear in pairs
if (x,y) is a pair
x*y=n
and if (x<=y)
x*x <= n
x <= sqrt(n)
*/

//Efficient Solution
bool isPrime(int n)//time comp. O(sqrt(n))
{
    if (n == 1)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
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