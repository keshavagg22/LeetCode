// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void pop_backV(vector<int> &V)
{
    // your code here
    V.pop_back();
    
}

void insertV(vector<int> &V, int index, int element)
{
    // your code here
    V.insert(V.begin() + index, element);
}

int frontV(vector<int> &V)
{
    // your code here
    return V.front();
    
}

int backV(vector<int> &V){
    
    // your code here
    return V.back();
    
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int> V(n);
        for(int i = 0; i < n; i++)
            cin>>V[i];
        
        int q;
        cin>>q;
        
        if(q == 1)
        {
            pop_backV(V);
            for(auto itr = V.begin(); itr != V.end(); itr++)
            cout << *itr << " ";
        }
        else if(q == 2)
        {
            int index;int element;
            cin>>index>>element;
            insertV(V, index, element);
            for(auto itr = V.begin(); itr != V.end(); itr++)
            cout << *itr << " ";
        }
        else if(q == 3){
            cout << frontV(V);
        }
        else{
             cout << backV(V);
        }
        cout << endl;
        
    }
}


  // } Driver Code Ends