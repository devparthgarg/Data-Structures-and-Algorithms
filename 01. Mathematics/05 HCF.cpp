#include<bits/stdc++.h>
using namespace std;

/*
HCF or GCD :
Largest Number which divides two numbers
eg: a=4,b=6  ; output : 2
eg: a=7,b=13 ; output : 1
*/

int HCF(int a, int b)//time comp. O(min(a,b))
{
    int res = min(a, b);
    while (true)
    {
        if (a % res == 0 and b % res == 0)
        {
            break;
        }
        else
        {
            res--;
        }
    }

    return res;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << HCF(n1, n2) << endl;
    return 0;
}