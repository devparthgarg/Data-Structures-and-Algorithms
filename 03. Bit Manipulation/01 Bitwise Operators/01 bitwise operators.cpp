#include<bits/stdc++.h>
using namespace std;

/*
All operations are O(1)
*/

int main()
{
    int x = 2, y = 3;
    //10 : 2 
    //11 : 3 

    //and
    //10 & 11 = 10 = 2
    cout <<"(x & y) and logic operation result: "<< (x & y) << endl;

    //or
    //10 | 11 = 11 = 3
    cout <<"(x | y) or logic operation result: "<< (x | y) << endl;

    //xor
    //10 ^ 11 = 01 = 1
    cout << "(x ^ y) xor logic operation result: "<<  (x ^ y) << endl;

    //left shift operator : x<<y = x*(2^y)
    //10 << 3 = 1000 = 16 -- 2 * (2^3)
    cout << "(x << y) left shift logic operation result: "<< (x << y) << endl;

    //right shift operator : x>>y = x/(2^y)
    cout << "(x >> y) right shift logic operation result: "<< (x >> y) << endl;

    //not operator : inverts all bits : unary operator (~x)
    cout << "(~x) inverts all bits result: "<< (~x) << endl;

    return 0;
}