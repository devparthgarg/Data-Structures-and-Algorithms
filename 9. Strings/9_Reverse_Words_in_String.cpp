#include<bits/stdc++.h> 
using namespace std; 

void reverse(char str[],int low, int high)
{
    while(low<=high)
    {
        swap(str[low],str[high]);
        low++;
        high--;
    }
}

void reverseWords(char str[],int n)
{
    int start=0;
    for(int end=0;end<n;end++)
    {
        if(str[end]==' ')
        {
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    reverse(str,start,n-1); // reverses last word seprately
    reverse(str,0,n-1); // reverses whole string
} 
 
int main() 
{ 
    string s;
    getline(cin,s);

    int n=s.length();
    char str[n];

    strcpy(str, s.c_str());

    reverseWords(str,n);
    for (int i = 0; i < n; i++) 
    {
        cout<<str[i];
    }
    
    return 0; 
} 