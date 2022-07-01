// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int x)
    {
    	// Your code here
    	for(int i=0; i<32; i+=2){
        int i_bit = ( x >> i ) & 1; // find i th bit
        int i_1_bit = (x >> ( i+1 )) & 1;  // find i+1 th bit
        
        x = x - ( i_bit << i) // remove i_bit
              - ( i_1_bit << ( i+1 ) ) // remove i+1 th bit
              + ( i_bit << ( i+1 ) ) // put i_bit at i+1 location
              + ( i_1_bit << i );  // put i+1 bit at i location
    }
    return x;
    	
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends