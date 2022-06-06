// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void fun(int A){
    
    //code here
    if(A > 0){
        cout<<"Positive";
    }
    else if(A < 0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int A;
	    cin >> A;
	    fun(A) ;
	    cout << endl;
	}
}  // } Driver Code Ends