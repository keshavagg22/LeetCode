//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/
#include<bits/stdc++.h>


class Solution {
public:

    int pal(int x){
        vector<int> a;
        while(x > 0){
            a.push_back(x%10);
            x = x/10;
        }
        int res = 1;
        for(int i = 0; i < a.size()/2; i++){
            if(a[i] != a[a.size() - 1 - i]){
                res = 0;
            }
        }
        return res;
    }
    
    int PalinArray(int a[], int n)
    {
    	// code here
    	int res = 1;
    	for(int i = 0; i < n; i++){
    	    if(pal(a[i]) == 0){
    	        return 0;
    	    }
    	}
    	return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends