#include <iostream>
#include <string.h>

using namespace std;

class students{
	
	int marks;
	
	public:
		void input()
	{
		cout<<"marks in subject:"<<endl;
		cin>>marks;
		
	}
		void output(){
			cout<<"marks:"<<marks<<endl;
		}
};

int main(){
	string name;
	int roll;
	cout<<"Enter you're name:"<<endl;
		cin>>name;
		cout<<"Enter you're roll:"<<endl;
		cin>>roll;
		
		students s1,s2,s3,s4,s5;
		s1.input();
		s2.input();
		s3.input();
		s4.input();
		s5.input();
		
		s1.output();
		s2.output();
		s3.output();
		s4.output();
		s5.output();
		return 0;
}
