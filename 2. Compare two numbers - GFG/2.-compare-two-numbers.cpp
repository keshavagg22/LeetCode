// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int compare(int A, int B){
    
    //code here
    if(A > B){
        return A;
    }
    else{
        return B;
    }
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int A, B;
	    cin >> A >> B;
	    cout << compare(A, B) << endl;
	}
}  // } Driver Code Ends