#include <iostream>

using namespace std;

int main()
{
   class student{
    public:
    string name;
    int roll;
    int total;
    student(string n,int r,int t){
        name=n;
        roll=r;total=t;
    }
   };
    
    string name;
    int roll;int total;
    cin >>name >> roll >>total;
    student stu1(name,roll,total);
    cout<< stu1.name <<" "<< stu1.roll <<" "<< stu1.total;

    return 0;
}