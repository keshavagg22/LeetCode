// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
        //Your code here
        vector<int> v(hashSize, -1);
        for(int i = 0; i < sizeOfArray; i++){
            int x = arr[i]%hashSize;
            bool y = false;
            int z = 0;
            while(y == false && z < hashSize){
                if(v[x] == arr[i]){
                    break;
                }
                if(v[x] == -1){
                    v[x] = arr[i];
                    y = true;
                }
                else{
                    x++;
                    z++;
                    if(x >= hashSize){
                        x = x%hashSize;
                    }
                }
            }
        }
        return v;
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
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    vector<int> hash;
	    Solution obj;
	    hash = obj.linearProbing( hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}

  // } Driver Code Ends