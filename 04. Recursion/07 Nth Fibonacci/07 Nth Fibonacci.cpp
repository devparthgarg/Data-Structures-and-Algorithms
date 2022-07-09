#include<bits/stdc++.h>
using namespace std;

//Time: O(2^n)
//Space: O(2^n)

int fibonacci(int n)
{
    if (n == 0 or n == 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << fibonacci(n);
    return 0;
}