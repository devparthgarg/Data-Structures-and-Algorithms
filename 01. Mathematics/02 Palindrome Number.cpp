#include<bits/stdc++.h>
using namespace std;

/*
Palindrome :

eg: n=123 , rev=321 ==> not palindrome
eg: n=121 , rev=121 ==> palindrome
eg: n=1   , rev=1   ==> palindrome
*/

bool palindrome(int n)//time comp. O(d) ; d : number of digits
{
    int rev = 0;
    int m = n;
    while (n != 0)//reversing a number code
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if (rev == m)
    {
        return true;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    cout << palindrome(n) << endl;
    return 0;
}