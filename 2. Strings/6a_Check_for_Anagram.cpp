#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1,string s2) //Time Comp. O(n*logn)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    return s1==s2;
}

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    cout<<isAnagram(s1,s2);
    return 0;
}