#include<bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n) //time comp. O(n) ; space comp. O(n)
{
	unordered_set<int> s;

	for (int i = 0; i < n; i++)
	{
		s.insert(arr[i]);
	}

	return s.size();
}

int countDistinct_Oneliner(int arr[], int n) //above implementation made short
{
	unordered_set<int> s(arr, arr + n);
	return s.size();
}

int main()
{
	int arr[] = {15, 12, 13, 12, 13, 13, 18};
	int n = sizeof(arr) / sizeof(int);

	cout << countDistinct(arr, n) << endl;
	return 0;
}