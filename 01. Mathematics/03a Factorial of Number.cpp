#include<bits/stdc++.h>
using namespace std;

/*
Factorial :
eg : n=5 ; output : 120 ; explanation : 5x4x3x2x1=120
eg : n=1 ; output : 1
*/

//Iterative Solution
int factorial(int n)//time comp. O(n)
{
    int fact = 1;

    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;
    cin >> n;

    cout << factorial(n) << endl;
    return 0;
}