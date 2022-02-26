#include<bits/stdc++.h>
using namespace std;

/*
All operations are O(1)
*/

int main()
{
    int x = 2, y = 3;

    //and
    cout << (x & y) << endl;

    //or
    cout << (x | y) << endl;

    //xor
    cout << (x ^ y) << endl;

    //left shift operator : x<<y = x*(2^y)
    cout << (x << y) << endl;

    //right shift operator : x>>y = x/(2^y)
    cout << (x >> y) << endl;

    //not operator : inverts all bits : unary operator (~x)
    cout << (~x) << endl;

    return 0;
}