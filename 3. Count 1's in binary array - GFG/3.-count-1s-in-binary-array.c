// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

// Function to count number of Ones
// arr: input array 
// N: size of input array
int first(int arr[], int N){
    int low = 0, high = N-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] > 0){
            low = mid + 1;
        }
        else if(arr[mid] < 0){
            high = mid - 1;
        }
        else{
            if(mid == 0 || arr[mid] != arr[mid-1]){
                return mid;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return N;
}
int countOnes(int arr[], int N)
{
    return first(arr,N);
    //Your code here
}

// { Driver Code Starts.

int main(){
    
    int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		int *a;
		a = (int*)malloc(n * sizeof(int));
		for (int i = 0; i < n; ++i)
			scanf("%d", &a[i]);

		printf("%d\n", countOnes(a, n) );
	}
	return 0;
	
}
  // } Driver Code Ends