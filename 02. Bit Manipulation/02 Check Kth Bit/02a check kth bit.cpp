#include<bits/stdc++.h>
using namespace std;

//k = [0,totalBits-1]
int kthBit(int n, int k)
{
	int mask = 1 << k;
	return n & mask;
}

int main()
{
	int n = 5;
	int k = 1;

	cout << kthBit(n, k) << endl;
	return 0;
}