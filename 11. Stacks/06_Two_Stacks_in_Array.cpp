#include<bits/stdc++.h>
using namespace std;

class twoStacks
{
    public:
    int *arr;
    int cap;
    int top1;
    int top2;

    twoStacks(int c)
    {
        cap=c;
        top1=-1;
        top2=cap;
        arr=new int[c];
    }

    void push1(int d)
    {
        if(top1<(top2-1))
        {
            top1++;
            arr[top1]=d;
        }
    }

    void push2(int d)
    {
        if(top1<(top2-1))
        {
            top2--;
            arr[top2]=d;
        }
    }

    int pop1()
    {
        if(top1>=0)
        {
            int d=arr[top1];
            top1--;
            return d;
        }
        else
        {
            return INT_MAX;
        }
    }

    int pop2()
    {
        if(top2<cap)
        {
            int d=arr[top2];
            top2++;
            return d;
        }
        else
        {
            return INT_MAX;
        }
    }
};

int main()
{
    twoStacks s(5);

    s.push1(5);
    s.push2(10);
    s.push1(15);
    s.push2(20);
    s.push2(25);

    cout<<s.pop1()<<endl;
    cout<<s.pop2()<<endl;


    return 0;
}