// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    //Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int arr[], int num){
        int x = 0;
        int y = 0;
        for(int i = 1; i < num; i++){
            if(arr[i] > arr[i-1]){
                x++;
            }
            else{
                y++;
            }
        }
        if(x != 0 && y != 0){
            if(arr[0] > arr[num-1]){
                x++;
            }
            else{
                y++;
            }
        }
        if(x == 1 && y == num-1){
            return true;
        }
        else if(x == num - 1 && y == 1){
            return true;
        }
        else{
            return false;
        }
        // Your code here
        
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	//testcases
	cin>> T;
	
	while (T--){
	    int num;
	    //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for(int i = 0; i<num; ++i)
            cin>>arr[i];
        
        bool flag = false;
        Solution ob;
        
        //function call
        flag = ob.checkRotatedAndSorted(arr, num);
        
        //printing "No" if not sorted and
        //rotated else "Yes"
        if(!flag){
            cout << "No"<<endl;
        }
        else
        cout << "Yes"<<endl;
    
	}
	
	return 0;
}  // } Driver Code Ends