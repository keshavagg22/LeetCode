// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(int x){
   
   //Write your code here
   while(x >= 0){
       cout<<x<<" ";
       x = x - 1;
   }
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int x; cin>>x;
        utility(x);
        cout<<endl;
	}
}  // } Driver Code Ends