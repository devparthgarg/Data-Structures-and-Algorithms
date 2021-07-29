#include<bits/stdc++.h>
using namespace std;

//Efficient Solution
void allDivisors(int n)//time complexity : O(sqrt(n))
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
            {
                cout << n / i << " ";
            }
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