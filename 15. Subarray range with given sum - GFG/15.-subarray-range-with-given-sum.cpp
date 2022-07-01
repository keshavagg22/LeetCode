// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        //Your code here
        unordered_map<int,int> map;
        int subarray=0,presum=0;
        map[0]=1;
        for(int i=0;i<n;i++){
            presum+=arr[i]; //compute prefix sum until current element
            subarray+=map[presum-sum];//add no.of times presum-sum has already appeared
            map[presum]++;//increment the occurrence of presum 
            
        }
        return subarray;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends