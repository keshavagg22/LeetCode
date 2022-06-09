// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void vectorTraversal(vector<int> numbers){
    
    //write your code here
    for(int x: numbers){
        cout<<x<<" ";
    }
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	        int n; cin>>n;
            vector<int> numbers;
            int integer_value;
            for(int i = 0; i < n;i++){
                cin>>integer_value;
                numbers.push_back(integer_value);
            }
            
            vectorTraversal(numbers);
            cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends