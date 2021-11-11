#include<bits/stdc++.h>
using namespace std;

/*
print elements occuring more than
(n/k) times in array
*/

void nkOcc(vector<int> v, int k)//time comp. O(n*logn) ; space comp. O(1)
{
	int n = v.size();
	sort(v.begin(), v.end());

	int i = 1, cnt = 1;
	while (i < n)
	{
		while (i < n and v[i] == v[i - 1])
		{
			cnt++;
			i++;
		}
		if (cnt > (n / k))
		{
			cout << v[i - 1] << " ";
		}
		cnt = 1;
		i++;
	}
}

int main()
{
	vector<int> v = {10, 10, 20, 30, 20, 10, 10};
	int k = 2;

	nkOcc(v, k);
	return 0;
}