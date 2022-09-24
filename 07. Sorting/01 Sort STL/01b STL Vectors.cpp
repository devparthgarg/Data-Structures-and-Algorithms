#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v = {5, 4, 3, 2, 1};

	sort(v.begin(), v.end());
	for (int x : v)
	{
		cout << x << " ";
	}
	cout << endl;

	sort(v.begin(), v.end(), greater<int>());
	for (int x : v)
	{
		cout << x << " ";
	}
	cout << endl;

	return 0;
}