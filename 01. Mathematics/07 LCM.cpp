#include<bits/stdc++.h>
using namespace std;

/*
LCM :
Smallest number along all common multiples
eg: a=2,b=5 ; output : 10
eg: a=3,b=7 ; output : 21
*/

int LCM(int a, int b)//time comp. O(a*b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 and res % b == 0)
        {
            return res;
        }
        else
        {
            res++;
        }
    }

    return res;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << LCM(n1, n2) << endl;
    return 0;
}