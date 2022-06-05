// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(string MyInput){
    //Write your code below that prints myInput
    cout<<MyInput<<endl;;
    //Write your code below that prints myInput
}

// { Driver Code Starts.
    
int main() {
	
	string MyInput; 
    int t ; cin>>t; 
    while (t--) 
    { 
        getline(cin, MyInput); 
  
        // Keep reading a new line while there is 
        // a blank line 
        while (MyInput.length()==0 ) 
            getline(cin, MyInput); 
  
        utility(MyInput);
    } 
    return 0;
}  // } Driver Code Ends