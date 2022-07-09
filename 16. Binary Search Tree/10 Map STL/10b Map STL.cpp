#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int,string> m;//other method: map<int,string,greater<int>> m;

	m.insert({10,"parth"});
	m.insert({20,"yash"});
	m.insert({30,"kunal"});

	//find function
	if(m.find(20)!=m.end())
	{
		cout<<"found"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}

	//count function
	if(m.count(20))
	{
		cout<<"found"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}

	//lower_bound
	auto it=m.lower_bound(19);
	if(it!=m.end())
	{
		cout<<(*it).first<<endl;
	}
	else
	{
	    cout<<"No Equal or Greater Value"<<endl;
	}

	//upper_bound
	it=m.upper_bound(20);
	if(it!=m.end())
	{
		cout<<(*it).first<<endl;
	}
	else
	{
	    cout<<"No Greater Value"<<endl;
	}

	//erase and size function
	m.erase(10);
	cout<<m.size()<<endl;
	m.erase(m.find(20),m.end());
	cout<<m.size()<<endl;

	return 0;
}