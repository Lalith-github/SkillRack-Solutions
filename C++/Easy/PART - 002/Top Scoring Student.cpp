#include <bits/stdc++.h>
 
using namespace std;

struct Student{
    string name;
    int maths =0;
    int phy = 0;
    int chem = 0;
};

Student createStudent(const string &input){
    Student newStudent;
    
    int count = 0;
    
    for(const char &ch : input){
        if (ch == ':') {
            count ++;
            continue;
        }
        switch(count){
            case 0:
                newStudent.name += ch;
                break;
            case 1:
                newStudent.maths = (newStudent.maths * 10) + int(ch - '0');
                break;
            case 2:
                newStudent.phy = (newStudent.phy * 10) + int(ch - '0');
                break;
            case 3:
                newStudent.chem = (newStudent.chem * 10) + int(ch - '0');
                break;
        }
    }
    return newStudent;
}

int main(int argc, char** argv)
{
   int n;
   cin >> n;
   
   string input;
   vector<Student> results(n);
   string maxStudent;
   int maxTotal = INT_MIN;
   for(int i=0;i<n;i++){
        cin>>input;
        results.push_back(createStudent(input));
   }
   
   for(const Student &result : results){
       int total = result.maths + result.phy + result.chem;
       if (total > maxTotal){
           maxTotal = total;
           maxStudent = result.name;
       }
   }
   cout << maxStudent;
   
}