#include<bits/stdc++.h>
using namespace std;

class myStack
{
    public:

    int *arr;
    int cap;
    int top;

    myStack(int c)
    {
        cap=c;
        arr=new int[cap];
        top=-1;
    }

    void push(int d)
    {
        if(top==(cap-1))
        {
            cout<<"Stack Overflow"<<endl;
            return ;
        }

        top++;
        arr[top]=d;
    }

    int pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow"<<endl;
            return INT_MIN;
        }

        int res=arr[top];
        top--;
        
        return res;
    }

    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack Empty"<<endl;
            return INT_MIN;
        }

        return arr[top];
    }

    int size()
    {
        return (top+1);
    }

    bool isEmpty()
    {
        return (top==-1);
    }
};

int main()
{
    myStack s(5);
    
    s.push(5);
    s.push(10);
    s.push(15);

    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}