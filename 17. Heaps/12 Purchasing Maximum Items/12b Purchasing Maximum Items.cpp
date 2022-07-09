#include<bits/stdc++.h>
using namespace std;

//Efficient Solution (better soln. than previous one in most of the cases)
int maxItems(int a[], int n, int sum)//time comp. O(n*logn) ; space comp. O(n)
{
	int cnt = 0;

	priority_queue<int, vector<int>, greater<int>> pq(a, a + n);

	for (int i = 0; i < n; i++)
	{
		if (sum >= pq.top())
		{
			sum = sum - pq.top();
			pq.pop();
			cnt++;
		}
		else
		{
			break;
		}
	}

	return cnt;
}

int main()
{
	int a[] = {1, 12, 5, 111, 200};
	int n = sizeof(a) / sizeof(int);
	int sum = 10;

	cout << maxItems(a, n, sum);
	return 0;
}