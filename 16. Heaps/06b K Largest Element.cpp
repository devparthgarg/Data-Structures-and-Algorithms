#include<bits/stdc++.h>
using namespace std;

//Efficient Method
void kLargest(int a[], int n, int k)//time comp. O(k*logn) ; space comp. O(n)
{
	priority_queue<int> pq(a, a + n);

	while (k--)
	{
		cout << pq.top() << " ";
		pq.pop();
	}
}

int main()
{
	int a[] = {5, 15, 10, 20, 8};
	int n = sizeof(a) / sizeof(int);
	int k = 2;

	kLargest(a, n, k);
	return 0;
}