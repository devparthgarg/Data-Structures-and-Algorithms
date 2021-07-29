#include<bits/stdc++.h>
using namespace std;

//Efficient Solution - count number of times 5 occurs
int countZeroes(int n)//time comp. O(logn)
{
    int cnt = 0;

    for (int i = 5; i <= n; i = i * 5)
    {
        cnt = cnt + n / i;
    }

    return cnt;
}

int main()
{
    int n;
    cin >> n;

    cout << countZeroes(n) << endl;
    return 0;
}