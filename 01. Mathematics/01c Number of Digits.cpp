#include<bits/stdc++.h>
using namespace std;

/*
Number of Digits :
eg: n=123 ; output : 3
eg: n=0   ; output : 1
*/

//Logarithmic Solution
int countDigits(int n)//time comp. O(logn)
{
    return floor(log10(n) + 1);
}

int main()
{
    int n;
    cin >> n;

    cout << countDigits(n) << endl;
    return 0;
}