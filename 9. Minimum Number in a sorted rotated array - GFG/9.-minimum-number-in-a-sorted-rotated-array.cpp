// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // Your code here
        int mid, next, prev;
        while(low <= high)
        {
            mid = low + (high - low) / 2;
            next = mid + 1, prev = mid - 1;
            if(arr[low] <= arr[high]) return arr[low];
            else if(arr[mid] < arr[prev] and arr[mid] < arr[next]) return arr[mid];
            else if(arr[mid] <= arr[high]) high = mid - 1;
            else low = mid + 1;
        }
    }
};

// { Driver Code Starts.


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}  // } Driver Code Ends