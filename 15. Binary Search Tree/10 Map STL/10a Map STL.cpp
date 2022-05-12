#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int,int> m;

	//insert method 1
	m.insert({40,2});
	m.insert({30,3});
	m.insert({20,4});
	m.insert({10,5});

	//insert method 2
	m[50]=1;

	//insert key which is already present: it will be ignored
	m.insert({20,3});

	//iterating (items ordered according to keys)
	for(auto x:m)
	{
		cout<<x.first<<" "<<x.second<<endl;
	} 
	cout<<"----"<<endl;

	//[] operator inserts item if you access item which
	//is not present
	cout<<m.size()<<endl;
	cout<<m[60]<<endl;
	cout<<m.size()<<endl;

	//at() operator same as []
	cout<<m.at(40)<<endl;

	//iterating
	for(auto it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	} 
	cout<<endl;

	return 0;
}