#include<bits/stdc++.h>
using namespace std;

bool isValidSubsequence(string s1,string s2) //Time Comp. O(n+m) , Space Comp. O(1)
{
    int i=0;
    int j=0;
    
    while(i<s1.length() and j<s2.length())
    {
        if(s1[i]==s2[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    return j==s2.length();
}

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    cout<<isValidSubsequence(s1,s2);
    return 0;
}