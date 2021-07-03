#include <bits/stdc++.h>
using namespace std;

void permute(string str, int l, int r){
    
    if(l==r){
        if(str.find("AB")==string::npos){
            cout<<str<<" ";
        }
        return;
    }else{
        for(int i=l;i<=r;i++){
            swap(str[i],str[l]);
            permute(str,l+1,r);
            swap(str[i],str[l]);
        }   
    }
}

int main() {
	
	string str="ABC";
	
    permute(str,0,str.length()-1);      
    return 0;  
	
}