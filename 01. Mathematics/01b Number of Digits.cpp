#include<bits/stdc++.h>
using namespace std;

/*
Number of Digits :
eg: n=123 ; output : 3
eg: n=0   ; output : 1
*/

//Recursive Solution
int countDigits(int n)//time comp. O(d) ; space comp. O(d) ; d : number of digits
{
    if (n / 10 == 0)
    {
        return 1;
    }

    return 1 + countDigits(n / 10);
}

int main()
{
    int n;
    cin >> n;

    cout << countDigits(n) << endl;
    return 0;
}