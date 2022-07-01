// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


void printVector(const vector<int>& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

 // } Driver Code Ends
class Solution{
  public:
    // A, B, and C: input sorted arrays
    //Function to merge three sorted vectors or arrays 
    //into a single vector or array.
    vector<int> mergetwo(vector<int>& a, vector<int>& b){
       vector<int> c;
       int i=0;
       int j=0;
       
       while(j<b.size() && i<a.size()){
           if(a[i]<b[j]){
               c.push_back(a[i]);
               i++;
           }else{
               c.push_back(b[j]);
               j++;
           }
       }
       
       if(i<a.size()){
           for(int j=i;j<a.size();j++){
               c.push_back(a[j]);
           }
       }
       if(j<b.size()){
           for(int i=j;i<b.size();i++){
               c.push_back(b[i]);
           }
       }
       return c;
       
   }
   
   
   vector<int> mergeThree(vector<int>& a, vector<int>& b, vector<int>& c) 
   { 
       //Your code here
       vector <int> v;
       v=mergetwo(a,b);
       return mergetwo(v,c);
   }  

};

// { Driver Code Starts.

int main() 
{ 


    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    vector<int> A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }

    Solution obj;
    vector<int>ans = obj.mergeThree(A, B, C);
    for(auto i: ans)cout << i << " ";
    cout << "\n";
    // obj.printVector(mergeThree(A, B, C)); 
    
    }
   
    return 0; 
} 
  // } Driver Code Ends