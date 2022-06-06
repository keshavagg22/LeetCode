// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void arrayTraversal(int numbers[], int size){
    //Write your code below
    for(int i = 0; i < size; i++){
        cout<<numbers[i]<<" ";
    }
    
    
    //Don't provide the new line
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int numbers[n];
        for(int i = 0; i < n; i++){
            cin>>numbers[i];
        }
        arrayTraversal(numbers, n);
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends