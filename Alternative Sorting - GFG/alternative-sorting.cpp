// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    // Your code goes here
	    vector<int> v(N,0);
	    sort(arr,arr+N);
	    for(int i = 0; i < N/2; i++){
	        v[2*i+1] = arr[i];
	        v[2*i] = arr[N-1-i];
	    }
	    if(N%2 != 0){
	        v[N-1] = arr[N/2];
	    }
	    return v;
	}

};
	

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends