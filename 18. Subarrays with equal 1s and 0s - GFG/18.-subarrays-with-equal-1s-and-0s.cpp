// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                arr[i] = -1;
            }
        }
        unordered_map<int,int> map;
        int subarray=0,presum=0;
        map[0]=1;
        for(int i=0;i<n;i++){
            presum+=arr[i]; //compute prefix sum until current 			element
            subarray+=map[presum];//add no.of times presum-sum has already appeared
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
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
  // } Driver Code Ends