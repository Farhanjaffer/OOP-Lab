//q1..
//wap to represent the class student with following specifications-->
//private members--> are roll num, name , 2 subjects name , total 
//public numbers--> input function for resp data members
//display the grade
//if marks in between 91-100 o grade
//81-90 e grade
//71-80 a grade
//61-70 b grade below the above marks f grade  
//
//q2...
//wap to represent bank account wiht following specifications 
//private -->name of depositer,type of account,account number,balance amount in the account
//public-->to assign initial values, to withdraw an amount after checking balance, deposit an amount, display name and balance...

#include <iostream>
#include <string.h>
using namespace std;

class student{
	int roll;
	string name;
	int oop;
	int dsa;
	int total;
	public:
		
		void rollin(){
			cout<<"enter you're roll number:";
			cin>>roll;
			
		}
	void namein(){
		cout<<"Enter you're name:";
		cin>>name;
			
	}
	
	void oopin(){
			cout<<"Enter you're oop marks:";
		cin>>oop;
			
	}
void dsain(){
			cout<<"Enter you're dsa marks:";
		cin>>dsa;
		
	}
	
	void totalcalc(){
		total=oop+dsa;
		cout<< "you're total marks is: "<<total<<endl;
			
	}
	
	void grading(){
		if(total>=15){
			cout<<"you're grading is A"<<endl;
		}
	else if(total>=5 && total<15){
		cout<<"you're grading is B"<<endl;
		
	}
	else{
		cout<<"you're grading is C"<<endl;
	
	}
		
	}
	
	void display(){
		cout<<"you're name is :"<<name<<endl;
		cout<<"you're roll is :"<<roll<<endl;
		cout<<"oop marks :"<<oop<<endl;
		cout<<"dsa marks :"<<dsa<<endl;
			
	}
};
int main()
{
    student s1;
    s1.rollin();
    s1.namein();
    s1.oopin();
    s1.dsain();
    s1.display();
    s1.totalcalc();
    s1.grading();
    
    return 0;
}
