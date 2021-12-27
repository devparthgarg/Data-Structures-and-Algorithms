#include<bits/stdc++.h>
using namespace std;

/*
this function return floor(log2(n))
for floor(log3(n)) change base condition to n<3 and return 1+fun(n/3)
*/

int fun(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        return 1 + fun(n / 2);
    }
}

int main()
{
    cout << fun(16) << endl;

    return 0;
}