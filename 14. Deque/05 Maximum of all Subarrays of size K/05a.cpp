#include<bits/stdc++.h>
using namespace std;

//Print all maximum in size of subarray k
void maxOfSubarrays(vector<int> v, int k)//time comp. O(n^2) ; space comp. O(1)
{
	int n = v.size();
	for (int i = 0; i < n - k + 1; i++)
	{
		int max_no = INT_MIN;
		for (int j = i; j < i + k; j++)
		{
			max_no = max(max_no, v[j]);
		}
		cout << max_no << " ";
	}
}

int main()
{
	vector<int> v = {10, 8, 5, 12, 15, 7, 6};
	int k = 3;

	maxOfSubarrays(v, k);
	cout<<endl;
	
	return 0;
}