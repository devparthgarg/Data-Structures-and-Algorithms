#include<bits/stdc++.h>
using namespace std;

void previousGreater(int a[], int n)//time comp. O(n) ; space comp. O(n)
{
	stack<int> s;
	s.push(a[0]);

	for (int i = 0; i < n; i++)
	{
		while (!s.empty() and s.top() <= a[i])
		{
			s.pop();
		}

		int pg = s.empty() ? -1 : s.top();
		cout << pg << " ";
		s.push(a[i]);
	}
}

int main()
{
	int arr[] = {15, 10, 18, 12, 4, 6, 2, 9};
	int n = sizeof(arr) / sizeof(int);

	previousGreater(arr, n);
	return 0;
}