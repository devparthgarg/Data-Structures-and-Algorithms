/*

Example :

weights 50  20  30
values  600 500 400

knapsack capacity : 70
Output : 1140 (500 + 400 + (20/50)*600)

*/

#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2)
{
    //ratio of value/weight
    double v1=(double)p1.second/p1.first;
    double v2=(double)p2.second/p2.first;

    return v1>v2;
}

int fractionalKnapsack(vector<pair<int,int>> v,int n,int weight)//time comp. O(n*logn)
{
    sort(v.begin(),v.end(),compare);

    double res=0.0;

    for(int i=0;i<n;i++)
    {
        if(v[i].first<=weight)
        {
            //take whole part of item
            res=res+v[i].second;
            weight=weight-v[i].first;
        }
        else
        {
            //take fractional part of item
            res=res+((double)weight/v[i].first)*v[i].second;
            break;
        }
    }

    return res;
}

int main()
{
    int n;
    cin>>n;

    int weight;
    cin>>weight;

    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int w,value;
        cin>>w>>value;
        v.push_back(make_pair(w,value));
    }

    cout<<fractionalKnapsack(v,n,weight);
    return 0;
}