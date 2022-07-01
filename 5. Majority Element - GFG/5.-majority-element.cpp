// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        bool flag = false;
        unordered_map<int, long long> m;
        for(int i = 0; i < size; i++){
            if(m.find(a[i]) != m.end()){
                m[a[i]]++;
            }
            if(m.find(a[i]) == m.end()){
                m.insert({a[i],1});
            }
            if(m[a[i]] > size/2){
                flag = true;
                return a[i];
            }
        }
        if(flag == false){
            return -1;
        }
        // your code here
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends