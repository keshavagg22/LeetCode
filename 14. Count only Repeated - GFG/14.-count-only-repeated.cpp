// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<int, int> findRepeating(int *arr, int n){
        //code here
        if(n == 1){
            return {-1,-1};
        }
        int c = 1;
        int res = INT_MIN;
        int x = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] == arr[i-1]){
                c++;
                x = arr[i];
                res = max(res,c);
            }
            else{
                c = 1;
            }
        }
        if(res == INT_MIN){
            return {-1,-1};
        }
        return {x,res};
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    Solution obj;
	    pair<int, int> ans = obj.findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}  // } Driver Code Ends