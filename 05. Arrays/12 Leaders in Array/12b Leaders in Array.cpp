#include<bits/stdc++.h>
using namespace std;

/*
leader - nothing greater in right of it (equals are not allowed)
this solution prints from right to left (for printing left to right store in a array and print reverse of it)
*/

//Time: O(n)
void leaders(int *a, int n)
{
    int curr_leader = a[n - 1];
    cout << curr_leader << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (curr_leader < a[i])
        {
            curr_leader = a[i];
            cout << curr_leader << " ";
        }
    }

    return ;
}

int main()
{
    int arr[]={7,10,4,3,6,5,2};
    int n=sizeof(arr)/sizeof(int);

    leaders(arr, n);
    cout<<endl;
    
    return 0;
}