// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

// CollegeCourse Class 
class CollegeCourse
{
    //your code here
    private:
    string courseID;
    char Grade;
    int Credits;
    int gradePoints;
    float honorPoints;
    public:
    void set_CourseId(string CID){
        courseID = CID;
    }
    void set_Grade(char g){
        Grade = g;
    }
    void set_Credit(int cr){
        Credits = cr;
    }
    int calculateGradePoints(char g){
        if(g >= 'A' && g <= 'Z'){
            gradePoints = 10 - int(g - 'A');
        }
        if(g >= 'a' && g <= 'z'){
            gradePoints = 10 - int(g - 'a');
        }
        return gradePoints;
    }
    float calculateHonorPoints(int gp,int cr){
        honorPoints = float(gp*cr);
        return honorPoints;
    }
    void display(){
        cout<<gradePoints<<" "<<honorPoints<<endl;
    }
    
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    CollegeCourse cc;
    string courseId;
    int gp;
    char grade;
    int credits;
    cin>>courseId>>grade>>credits;
    cc.set_CourseId(courseId);
    cc.set_Grade(grade);
    cc.set_Credit(credits);
    gp=cc.calculateGradePoints(grade);
    cc.calculateHonorPoints(gp,credits);
    cc.display();
    }
    return 0;
}
  // } Driver Code Ends