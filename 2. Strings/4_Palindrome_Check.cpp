#include<bits/stdc++.h>
using namespace std;

bool isPalindromeNaive(string str) // Time Comp. O(n) for reversing , Space Comp. O(n)
{
    string rev=str;
    reverse(rev.begin(),rev.end());

    return rev==str;
}

bool isPalindrome(string str) // Time Comp. O(n) , Space Comp. O(1) 
{
    int i=0;
    int j=str.length()-1;

    while(i<j)
    {
        if(str[i]!=str[j])
        {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main()
{
    string str;
    getline(cin,str);

    cout<<isPalindromeNaive(str)<<endl;
    cout<<isPalindrome(str);
    return 0;
}