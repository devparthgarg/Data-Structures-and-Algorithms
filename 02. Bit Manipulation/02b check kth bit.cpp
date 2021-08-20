#include<bits/stdc++.h>
using namespace std;

//k = [0,totalBits-1]
int kthBit(int n, int k)
{
	n = n >> k;
	return n & 1;
}

int main()
{
	int n = 5;
	int k = 1;

	cout << kthBit(n, k);
	return 0;
}