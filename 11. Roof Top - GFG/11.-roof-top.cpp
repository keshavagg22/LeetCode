// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int A[], int N)
    {
       //Your code here
       for(int i = 1; i < N; i++){
           A[i-1] = A[i] - A[i-1]; 
       }
       int m = 0;
       int x = 0;
       for(int i = 0; i < N-1; i++){
           if(A[i] > 0){
               x++;
               m = max(x,m);
           }
           else{
               x = 0;
           }
       }
       return m;
    }
};

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout << ob.maxStep(a, n) << endl;
	}
	return 0;
}  // } Driver Code Ends