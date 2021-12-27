#include<bits/stdc++.h>
using namespace std;

/*
for a string of length 'n'
there exists '2^n' subsets(subsequences)
*/

//Time: O(2^n)
//Space: O(2^n)

void subsets(string s, string curr, int i)
{
    if (i == s.length())
    {
        cout << curr << " ";
        return ;
    }

    subsets(s, curr, i + 1);
    subsets(s, curr + s[i], i + 1);
}

int main()
{
    string str;
    getline(cin, str);

    subsets(str, "", 0);
    return 0;
}