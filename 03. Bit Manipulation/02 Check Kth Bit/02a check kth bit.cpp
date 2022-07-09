#include<bits/stdc++.h>
using namespace std;

/*
Using Left Shift Operator
*/

//Time: O(1)
bool kthBit(int n, int k)
{
	int mask = 1 << (k - 1);
	return (n & mask);
}

int main()
{
	//6 in binary is: 110
	int n = 6;

	//k range is: [1,32]
	int k1 = 1;
	int k2 = 2;
	int k3 = 3;

	cout << kthBit(n, k1) << endl;
	cout << kthBit(n, k2) << endl;
	cout << kthBit(n, k3) << endl;
	return 0;
}