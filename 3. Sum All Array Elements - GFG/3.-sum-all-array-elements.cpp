// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int arraySum(int numbers[], int size){
    //Just return the sum of the list
    //Don't print here
    int x = 0;
    for(int  i = 0; i < size; i++){
        x = x + numbers[i];
    }
    return x;
    
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
        cout << arraySum(numbers, n) << endl;
	}
	
	return 0;
}  // } Driver Code Ends