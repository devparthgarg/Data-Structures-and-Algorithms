#include<bits/stdc++.h>
using namespace std;

const int CHAR=256;

int leftMostNonRepeatingCharacter(string s) //Time Comp. O(n)
{
    int count[CHAR]{0};

    for(int i=0;i<s.length();i++)
    {
        count[s[i]]++;
    }

    for(int i=0;i<s.length();i++)
    {
        if(count[s[i]]==1)
        {
            return i;
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