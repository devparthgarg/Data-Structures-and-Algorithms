#include<bits/stdc++.h>
using namespace std;

//converts decimal to binary
void fun(int n)
{
    if (n == 0)
    {
        return ;
    }

    fun(n / 2);
    cout << n % 2;
}

int main()
{
    fun(7);

    cout << endl;
    return 0;
}