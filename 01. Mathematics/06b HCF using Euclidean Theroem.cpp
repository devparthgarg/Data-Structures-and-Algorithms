#include<bits/stdc++.h>
using namespace std;

/*
HCF or GCD :
Largest Number which divides two numbers
eg: a=4,b=6  ; output : 2
eg: a=7,b=13 ; output : 1
*/

//Efficient Solution
int HCF_Euclidean(int a, int b)//time comp. O(log(min(a,b)))
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return HCF_Euclidean(b, a % b);
    }
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << HCF_Euclidean(n1, n2) << endl;
    return 0;
}