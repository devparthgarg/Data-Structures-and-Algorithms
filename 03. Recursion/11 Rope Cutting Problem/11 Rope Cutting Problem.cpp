#include<bits/stdc++.h>
using namespace std;

//Time: O(3^n)
//Space: O(3^n)

int maxPieces(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }

    if (n < 0)
    {
        return -1;
    }

    int res = max(maxPieces(n - a, a, b, c), max(maxPieces(n - b, a, b, c), maxPieces(n - c, a, b, c)));

    if (res == (-1))
    {
        return -1;
    }

    return (res + 1);
}

int main()
{
    int n;
    int a, b, c;

    cin >> n >> a >> b >> c;

    cout << maxPieces(n, a, b, c);
    return 0;
}