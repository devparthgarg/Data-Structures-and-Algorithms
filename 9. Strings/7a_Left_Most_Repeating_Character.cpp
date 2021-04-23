#include<bits/stdc++.h>
using namespace std;

int leftMostRepeatingCharacter(string str) //Time Comp. O(n^2)
{
    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
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

    cout<<leftMostRepeatingCharacter(str);
    return 0;
}