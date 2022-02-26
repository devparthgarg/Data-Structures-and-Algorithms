#include<bits/stdc++.h>
using namespace std;

//Time: O(log(min(a,b))
int hcf_one_liner(int a, int b)
{
	return b == 0 ? a : hcf_one_liner(b, a % b);
}

int main()
{
	int a1 = 13, b1 = 17;
	int a2 = 100, b2 = 200;

	cout << hcf_one_liner(a1, b1) << endl;
	cout << hcf_one_liner(a2, b2) << endl;
	return 0;
}