#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	sort(a, a + n); //sorting increasing form
	for (int x : a)
	{
		cout << x << " ";
	}
	cout << endl;

	sort(a, a + n, greater<int>()); //sorting decreasing form
	for (int x : a)
	{
		cout << x << " ";
	}

	return 0;
}