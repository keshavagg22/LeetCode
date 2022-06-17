// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
    // Your code goes here  
    long long low = 1, high = x, ans = -1;
    while(low <= high){
        long long mid = (low+high)/2;
        long long s = mid*mid;
        if(s == x){
            return mid;
        }
        else if(s > x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends