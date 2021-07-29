#include<bits/stdc++.h>
using namespace std;

/*
LCM :
Smallest number along all common multiples
eg: a=2,b=5 ; output : 10
eg: a=3,b=7 ; output : 21
*/

/*
Relation between LCM and HCF
    LCM*HCF=a*b
*/

int HCF(int a, int b)
{
    return b == 0 ? a : HCF(b, a % b);
}

int LCM(int a, int b)//time comp. O(log(min(a,b)))
{
    return (a * b) / HCF(a, b);
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << LCM(n1, n2) << endl;
    return 0;
}