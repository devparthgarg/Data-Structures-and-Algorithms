#include<bits/stdc++.h>
using namespace std;

const int CHAR=256;

int leftMostRepeatingCharacter(string str) //Time Comp. O(n)
{
    int count[CHAR]={0};

    for(int i=0;i<str.length();i++)
    {
        count[str[i]]++;
    }

    for(int i=0;i<str.length();i++)
    {
        if(count[str[i]]>1)
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

    cout<<leftMostRepeatingCharacter(str);
    return 0;
}