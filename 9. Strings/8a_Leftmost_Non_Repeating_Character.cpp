#include<bits/stdc++.h>
using namespace std;

int leftMostNonRepeatingCharacter(string s) //Time Comp. O(n^2)
{
    for(int i=0;i<s.length();i++)
    {
        int count=0;
        for(int j=0;j<s.length();j++)
        {  
            if(s[i]==s[j])
            {
                count++;
            }
            if(j==(s.length()-1) and count==1)
            {
                return i;
            }            
        }
    }

    return -1;
}

int main()
{
    string str;
    getline(cin,str);

    cout<<leftMostNonRepeatingCharacter(str);
    return 0;
}