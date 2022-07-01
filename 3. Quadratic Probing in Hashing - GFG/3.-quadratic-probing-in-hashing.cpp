// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Quadratic Probing to handle collisions.
    void QuadraticProbing(vector <int>&hash, int hashSize, int arr[], int n)
    {
        //Your code here
        for(int i = 0; i < n; i++){
            hash[i] = -1;
        }
        for(int i = 0; i < n; i++){
            int x = arr[i]%hashSize;
            bool y = false;
            int z = 0;
            while(y == false){
                if(hash[x] == arr[i]){
                    break;
                }
                if(hash[x] == -1){
                    hash[x] = arr[i];
                    y = true;
                }
                else{
                    x = (x - z*z)%hashSize;
                    z++;
                    x = (x + z*z)%hashSize;
                }
            }
        }
    }


};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    
	    int  N;
	    cin>>N;
	    int arr[N];
	    
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    
	    vector<int> hash (hashSize,-1);
	    Solution obj;
	    obj.QuadraticProbing (hash, hashSize, arr, N);
	    
	    for(int i = 0;i < hashSize; i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}


  // } Driver Code Ends