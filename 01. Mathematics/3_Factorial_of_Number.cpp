#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact=1;

    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }

    return fact;
}

int factorialRecursive(int n)
{
    if(n==0)
    {
        return 1;
    }

    return n*factorialRecursive(n-1);
}

int main()
{
    int n;
    cin>>n;

    cout<<factorial(n)<<endl;
    cout<<factorialRecursive(n);
    return 0;
}