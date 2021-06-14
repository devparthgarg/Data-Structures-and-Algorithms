#include<bits/stdc++.h>
using namespace std;

void permutations(string s,int i=0)
{
    if(i==(s.length()-1))
    {
        cout<<s<<" ";
        return ;
    }

    for(int j=i;j<s.length();j++)
    {
        swap(s[i],s[j]);
        permutations(s,i+1);
        swap(s[i],s[j]);
    }
}

int main()
{
    string str;
    getline(cin,str);

    permutations(str,0);
    return 0;
}