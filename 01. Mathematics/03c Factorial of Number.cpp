#include<bits/stdc++.h>
using namespace std;

/*
Factorial :
eg : n=5 ; output : 120 ; explanation : 5x4x3x2x1=120
eg : n=1 ; output : 1
*/

//Ternary Operator Solution
int factorial(int n)//time comp. O(n) ; space comp. O(n)
{
    return (n == 1 or n == 0) ? 1 : n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << factorial(n) << endl;
    return 0;
}