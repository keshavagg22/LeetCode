// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void countDigits(int n){

    //write your code here
    //print number of digits in n
    int x = 0;
    while(n > 0){
        x++;
        n = n/10;
    }
    cout<<x;
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        countDigits(n);
        cout<<endl;
	}
}  // } Driver Code Ends