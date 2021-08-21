#include<bits/stdc++.h>
using namespace std;

class myStack
{
    public:

    vector<int> v;

    void push(int d)
    {
        v.push_back(d);
    }

    int pop()
    {
        int res=v.back();
        v.pop_back();

        return res;
    }

    int size()
    {
        return v.size();
    }

    bool isEmpty()
    {
        return v.empty();
    }

    int peek()
    {
        return v.back();
    }

};

int main()
{
    myStack s;
    
    s.push(5);
    s.push(10);
    s.push(15);

    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}