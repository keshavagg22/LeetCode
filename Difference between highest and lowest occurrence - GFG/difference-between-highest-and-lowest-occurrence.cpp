//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int findDiff(int a[], int n) {
        unordered_map<int,int> h;
        int m = 0;
        int p = INT_MAX;
        for(int i = 0; i < n; i++){
            h[a[i]]++;
            if(h[a[i]] > m){
                m = h[a[i]];
            }
        }
        for(auto x:h){
            if(x.second < p){
                p = x.second;
            }
        }
        return m - p;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n], i;
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.findDiff(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends