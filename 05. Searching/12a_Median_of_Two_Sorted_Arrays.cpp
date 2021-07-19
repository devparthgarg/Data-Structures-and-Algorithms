#include<bits/stdc++.h>
using namespace std;

float median(vector<int> v1, vector<int> v2)//time comp. O(n*logn) ; space comp. O(n)
{
	vector<int> temp;

	for (int i = 0; i < v1.size(); i++)
	{
		temp.push_back(v1[i]);
	}

	for (int i = 0; i < v2.size(); i++)
	{
		temp.push_back(v2[i]);
	}

	sort(temp.begin(), temp.end());

	if (temp.size() % 2 != 0)
	{
		return (temp[temp.size() / 2.0]);
	}
	else
	{
		return float((temp[temp.size() / 2] + temp[(temp.size() / 2) - 1]) / 2.0);
	}
}

int main()
{
	vector<int> v1 = {10, 20, 30, 40, 50};
	vector<int> v2 = {5, 15, 25, 35, 45};

	cout << median(v1, v2);
	return 0;
}