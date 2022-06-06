// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int nextPrime(int n){
    if(n == 1){
        return 2;
    }  
        
    //code here to find next prime number
    //return next prime number
    n++;
    while(true){
        bool x = true;
        for(int i = 2; i < n; i++){
            if(n%i == 0){
                x = false;
                break;
            }
        }
        if(x == true){
            return n;
        }
        n++;
    }
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int ans = nextPrime(n);
        cout<<ans<<endl;
	}
}  // } Driver Code Ends