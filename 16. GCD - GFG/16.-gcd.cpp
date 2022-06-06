// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
int gcd(int a, int b){

    int x = 0;
    if(a > b){
        x = b;
    }
    else{
        x = a;
    }
    int y = 1;
    //code here to calculate and return gcd of a and b
    for(int i = 1; i <= x; i++){
        if(a%i == 0 && b%i ==0){
            y = i;
        }
    }
    return y;
        
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int A, B; cin>>A>>B;
        int ans = gcd(A,B);
        cout<<ans<<endl;
	}
}  // } Driver Code Ends