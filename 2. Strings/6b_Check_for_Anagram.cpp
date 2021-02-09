#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1,string s2) //Time Comp. O(n) , Space Comp. O(1)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }

    int count[26]={0}; //for general all characters take 256 instead of 26
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]-'a']++;
        count[s2[i]-'a']--;
    }

    for(int i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    cout<<isAnagram(s1,s2);
    return 0;
}