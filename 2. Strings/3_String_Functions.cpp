#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);

    cout<<str.length()<<endl;
    str=str+"xyz";
    cout<<str<<endl;
    cout<<str.substr(1,3)<<endl;
    cout<<str.find("eek")<<endl;
    return 0;
}