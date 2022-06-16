// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*
str: string in which pattern we have to find pattern.
text: pattern needs to searched.
*/

bool searchPattern(string str, string pat)
{
    // your code here
    for(int i=0;i<str.length();i++)
    {
        string check="";
        int j=0;
        int k=i;
        while(str[k]==pat[j])
        {
            check+=str[k];
            if(check==pat)
            {
                return true;
            }
            j++;
            k++;
        }
    }
    return false;
}



// { Driver Code Starts.
int main()
{
    int t; cin>>t;
    
    while(t--)
    {
        string str, pat;
        cin>>str;
        cin>>pat;
        
        if(searchPattern(str, pat) == true)
            cout << "Present" <<endl;
        else cout << "Not present" <<endl;
    }
}

  // } Driver Code Ends