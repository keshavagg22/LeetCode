// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(int a, int r, int n){
    //Complete the code below
    int ans = a*int(pow(r,n-1));
    //Complete the code above
    
    //The line below prints the output. Don't change it!

    cout << ans << endl;
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t-- > 0) {
        int a, n;
        cin>>a>>n;
        int r = 2;
        utility(a, r, n);
    }
	
}  // } Driver Code Ends