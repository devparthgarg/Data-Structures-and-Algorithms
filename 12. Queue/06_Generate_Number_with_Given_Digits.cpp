#include<bits/stdc++.h>
using namespace std;

/*
print first n numbers containing
only 5 and 6 as digits
*/

void printNumbers(int n)//time comp. O(n) ; space comp. O(n)
{
	queue<string> q;

	q.push("5");
	q.push("6");

	for(int i=0;i<n;i++)
	{
		string curr=q.front();
		cout<<curr<<endl;
		q.pop();
		q.push(curr+"5");
		q.push(curr+"6");
	}
}

int main()
{
	int n;
	cin>>n;

	printNumbers(n);
	return 0;
}