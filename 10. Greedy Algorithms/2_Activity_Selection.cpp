/*
Problem - BUSY MAN from SPOJ
*/

#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2)
{
    return p1.second<p2.second;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++)
        {
            int s,e;
            cin>>s>>e;
            v.push_back(make_pair(s,e));
        }

        //sort according to activities having ending time first
        sort(v.begin(),v.end(),compare);

        //select activities
        int count=1;
        int check=v[0].second;

        for(int i=1;i<n;i++)
        {
            if(v[i].first>=check)
            {
                count++;
                check=v[i].second;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}