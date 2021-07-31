#include<bits/stdc++.h>
using namespace std;

void print(int n)//time complexity O(n) ; space comp. O(n)
{
    if(n==0)
    {
        return ; 
    }
    
    print(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;

    print(n);
    return 0;
}