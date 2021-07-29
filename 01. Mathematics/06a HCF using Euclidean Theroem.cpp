#include<bits/stdc++.h>
using namespace std;

/*
HCF or GCD :
Largest Number which divides two numbers
eg: a=4,b=6  ; output : 2
eg: a=7,b=13 ; output : 1
*/

//Naive Solution
int HCF_Euclidean(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << HCF_Euclidean(n1, n2) << endl;
    return 0;
}