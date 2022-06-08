// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

char extraChar(string s1, string s2)
{
    int count[256] = {0};
    for(int i = 0; i < s2.length(); i++){
        count[s2[i]]++;
    }
    for(int i = 0; i < s1.length(); i++){
        count[s1[i]]--;
    }
    for(int i = 0; i < 256; i++){
        if(count[i] != 0){
            return char(i);
        }
    }
    return char(0);
    //code here
    
    
}

// { Driver Code Starts.
    
int main() {
	
        int t;
        cin>>t;
        while(t--) {
            string s1,s2;
            cin>>s1;
            cin>>s2;
            cout<<extraChar(s1, s2)<<endl;
        }
}  // } Driver Code Ends