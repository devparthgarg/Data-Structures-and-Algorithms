#include<bits/stdc++.h>
using namespace std;

void fun1()
{
	cout << "fun1()" << endl;
}

void fun2()
{
	cout << "Before fun1()" << endl;
	fun1();
	cout << "After fun1()" << endl;
}

int main()
{
	cout << "Before fun2()" << endl;
	fun2();
	cout << "After fun2()" << endl;

	return 0;
}