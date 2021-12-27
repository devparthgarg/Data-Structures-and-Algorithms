#include<bits/stdc++.h>
using namespace std;

//Time: O(n)
//Space: O(n)

bool palindrome(string str, int s, int e)
{
    if (s >= e)
    {
        return true;
    }

    return (str[s] == str[e]) and palindrome(str, s + 1, e - 1);
}

int main()
{
    string str;
    cin >> str;

    int s = 0;
    int e = str.length() - 1;

    cout << palindrome(str, s, e);
    return 0;
}