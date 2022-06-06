// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		int binary_to_decimal(int B)
		{
			//code here
			int x = 0;
			int y = 1;
			while(B > 0){
			    int z = B%10;
			    B = B/10;
			    x = x + z*y;
			    y = y*2;
			}
			return x;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int B;
    	cin >> B;
    	Solution ob;
    	int  ans = ob.binary_to_decimal(B);
    	cout << ans <<"\n";
    }
	return 0;
}  // } Driver Code Ends