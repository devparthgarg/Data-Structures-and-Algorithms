#include<bits/stdc++.h>
using namespace std;

void subsets(string s,string curr,int i)
{
    if(i==s.length())
    {
        cout<<curr<<" ";
        return ;
    }

    subsets(s,curr,i+1);
    subsets(s,curr+s[i],i+1);
}

int main()
{
    string str;
    getline(cin,str);

    subsets(str,"",0);
    return 0;
}