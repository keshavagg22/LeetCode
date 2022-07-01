// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<int> lowerindex;
        vector<int> lowerchar;
        vector<int> upperindex;
        vector<int> upperchar;
        for(int i = 0; i < n; i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                lowerchar.push_back(str[i]);
                lowerindex.push_back(i);
            }
            else{
                upperchar.push_back(str[i]);
                upperindex.push_back(i);
            }
        }
        string res = "";
        sort(lowerchar.begin(),lowerchar.end());
        sort(upperchar.begin(),upperchar.end());
        int i = 0;
        int j = 0;
        while(i < lowerchar.size() && j < upperchar.size()){
            if(lowerindex[i] < upperindex[j]){
                res += lowerchar[i];
                i++;
            }
            else{
                res += upperchar[j];
                j++;
            }
        }
        while(i < lowerchar.size()){
            res += lowerchar[i];
            i++;
        }
        while(j < upperchar.size()){
            res += upperchar[j];
            j++;
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends