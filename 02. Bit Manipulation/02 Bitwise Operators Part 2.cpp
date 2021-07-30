#include<bits/stdc++.h>
using namespace std;

int main()
{
    //left shift operator : x<<y = x*(2^y)
    int x = 4, y = 2;
    cout << (x << y) << endl;

    //right shift operator : x>>y = x/(2^y)
    cout << (x >> y) << endl;

    //not operator : inverts all bits : unary operator (~x)
    cout << (~x) << endl;
    cout << (~y) << endl;

    return 0;
}