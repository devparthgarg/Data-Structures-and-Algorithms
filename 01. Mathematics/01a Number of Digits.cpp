#include<bits/stdc++.h>
using namespace std;

/*
Number of Digits :
eg: n=123 ; output : 3
eg: n=0   ; output : 1
*/

//Iterative Solution
int countDigits(int n)//time comp. O(d) ; d : number of digits
{
    int cnt = 0;
    while (n != 0)
    {
        n = n / 10;
        cnt++;
    }

    return cnt;
}

int main()
{
    int n;
    cin >> n;

    cout << countDigits(n) << endl;
    return 0;
}