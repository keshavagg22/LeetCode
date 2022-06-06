// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(int n){
    
    //code here
    //for loop to be added
    for(int i = 1; i <= 10; i++){
        cout<<(n*i)<<" ";
    }
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        utility(n);
        cout<<endl;
	}
}  // } Driver Code Ends