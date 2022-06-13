// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> permute(vector<vector<int>> &arr, int n);


int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>> a>> b;
            arr[i].push_back(a);
            arr[i].push_back(b);
        }
        
        vector<int> ans;
        ans = permute(arr, n);
        for(int i=0;i<n;i++)
            cout << ans[i] << "\n";
        
    }
    
	return 0;
}// } Driver Code Ends


vector<int> permute(vector<vector<int>> &arr, int n)
{
    vector<vector<int>> v(n,vector<int>(2,0));
    vector<int> ans(n,0);
    for(int i = 0; i < n; i++){
        v[i][0] = arr[i][0] + arr[i][1];
        v[i][1] = i+1;
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < n; i++){
        ans[i] = v[i][1];
    }
    return ans;
    // Complete the function
    
}