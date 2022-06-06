// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Write the complete function returnValueFunction below
//This function should take n as a parameter
//return double of n
int returnValueFunction(int n){
    return 2*n;
}



//Write the complete function returnValueFunction above
//This function should take n as a parameter
//return double of n

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        cout<<returnValueFunction(n)<<endl;
	}
}  // } Driver Code Ends