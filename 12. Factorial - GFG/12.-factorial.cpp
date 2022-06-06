// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int nFactorial(int n){
    int ans = 1;
    while(n > 0){
        ans = ans*n;
        n = n - 1;
    }
    //Write your code here
    
    return ans;
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int ans = nFactorial(n);
        cout<<ans<<endl;
	}
}  // } Driver Code Ends