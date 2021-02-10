#include<bits/stdc++.h>
using namespace std;

void pattSearching(string txt,string pat)
{
    int n=txt.length();
    int m=pat.length();

    for(int i=0;i<=(n-m);i++)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(pat[j]!=txt[i+j])
            {
                break;
            }
        }
        if(j==m)
        {
            cout<<i<<" ";
        }
    }

    return ;
}

int main()
{
    string txt,pat;
    getline(cin,txt);
    getline(cin,pat);

    pattSearching(txt,pat);
    return 0;
}