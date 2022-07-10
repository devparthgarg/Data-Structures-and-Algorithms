#include<bits/stdc++.h>
using namespace std;

//time: O(n*logn)
//space: O(1)
int activitySelection(vector<vector<int>> intervals,int n)
{
    sort(intervals.begin(),intervals.end());

    int res=1;
    int endTime=intervals[0][1];
    for(int i=1;i<n;i++)
    {
        if(intervals[i][0]>=endTime)
        {
            res++;
            endTime=intervals[i][1];
        }
    }

    return res;
}

int main()
{
    vector<vector<int>> intervals={{3,8},{2,4},{1,3},{10,11}};
    int n=4;

    cout<<activitySelection(intervals,n)<<endl;
    return 0;
}