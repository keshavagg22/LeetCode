// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

class student
{
    protected :
        int roll_number;
        
    public:
        void set_number(int a)
        {
            roll_number = a;
        }
        
        void display_number()
        {
            cout<<roll_number<<endl;
        }
};


 // } Driver Code Ends
//User function Template for C++
class test: public student 
{    
    protected:
     float marks=0;
    public:
        void set_marks(float *arr){
            for(int i=0;i<5;i++){
                  marks += *(arr+i);
            }
        } // Add set_marks() method here.
};
class result: public test
{
    protected:
      float average;
       public:
        void display(void){
           average = marks/5;
             cout<<roll_number<<" "<<marks<<" "<<average<<endl;
        }// Add display() method here.
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
    	result student1;
	    int n;
	    cin>>n;
	    student1.set_number(n);
	    float temp[5];
	    int i;
	
	    for(i = 0; i < 5; i++)
	        cin>>temp[i];
	
	    student1.set_marks(temp);
	    student1.display();
	}

	return 0;    
}
  // } Driver Code Ends