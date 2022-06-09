// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int minimum_vertical_sum(vector<vector<int>>v)
{
    //Your code here
    int max = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i].size() > max){
            max = v[i].size();
        }
    }
    for(int i = 0; i < v.size(); i++){
        v[i].resize(max);
    }
    int min = 0;
    for(int i = 0; i < v.size(); i++){
        min = min + v[i][0];
    }
    for(int i = 1; i < v[0].size(); i++){
        int m = 0;
        for(int j = 0; j < v.size(); j++){
            m = m + v[j][i];
        }
        if(m < min){
            min = m;
        }
    }  
    return min;
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<vector<int>>v;
	    for(int i=0;i<n;i++)
	    {
	        int m;
	        cin>>m;
	        vector<int>temp;
	        for(int j=0;j<m;j++)
	        {
	            int k;
	            cin>>k;
	            temp.push_back(k);
	        }
	        v.push_back(temp);
	    }
	    int min_sum=minimum_vertical_sum(v);
	    cout<<min_sum<<endl;
	}
	return 0;
}
  // } Driver Code Ends