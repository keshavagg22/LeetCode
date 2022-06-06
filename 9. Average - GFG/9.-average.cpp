// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int posAverage(int numbers[], int size){
    
    
    //Write your code to find average of positive numbers in numbers array
    //return the answer
    int x = 0;
    int y = 0;
    for(int i = 0; i < size; i++){
        if(numbers[i] >= 0){
            x = x + numbers[i];
            y++;
        }
    }
    return x/y;
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int numbers[n];
        for(int i = 0;i < n; i++){
            cin>>numbers[i];
        }
        int avg = posAverage(numbers, n);
        cout<<avg<<endl;  
	}
	
	return 0;
}  // } Driver Code Ends