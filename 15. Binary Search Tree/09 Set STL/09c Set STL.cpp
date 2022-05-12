#include<bits/stdc++.h>
using namespace std;

/*
set on user defined data-type
*/

class Test
{
public:
	int id;

	bool operator<(const Test& t) const
    {
        return (this->id < t.id);
    }
};

int main()
{
	Test t1 = { 110 }, t2 = { 102 }, 
         t3 = { 101 }, t4 = { 115 };
  
    set<Test> s; 
      
    // insert structure in set
    s.insert(t1); 
    s.insert(t2);
    s.insert(t3);
    s.insert(t4);
      
    //iterating
    for(auto x:s)
    {
    	cout<<x.id<<" ";
    }

    return 0;
}