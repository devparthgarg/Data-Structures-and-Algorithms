#include<bits/stdc++.h>
using namespace std;

int josephus(int n,int k)
{
    if(n==1)
    {
        return 0;
    }

    return (josephus(n-1,k)+k)%n;//here counting from 0 , if counting starts from 1 - add 1 to the final result
}

int main()
{
    int n,k;
    cin>>n>>k;

    cout<<josephus(n,k);
    return 0;
}