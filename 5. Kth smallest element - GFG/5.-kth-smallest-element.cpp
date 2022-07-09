// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        // Your code here
        vector<int> v;
        priority_queue<int> pq;
        for(int i = 0; i < k; i++){
            pq.push(arr[i]);
        }
        for(int i = k; i < n; i++){
            if(pq.top() > arr[i]){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        while(pq.empty() == false){
            v.push_back(pq.top());
            pq.pop();
        }
        sort(v.begin(), v.end());
        return v[v.size()-1];
    }
};


// { Driver Code Starts.
int main(){
	
	int t;
	cin >> t;
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    
	    for(int i = 0; i<n; ++i)
	        cin>>arr[i];
	        
	    Solution ob;
	    cout << ob.kthSmallest(arr, n, k) << endl;
	    
	}
	return 0;
}  // } Driver Code Ends