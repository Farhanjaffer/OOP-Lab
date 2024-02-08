//q2...
//wap to represent bank account wiht following specifications 
//private -->name of depositer,type of account,account number,balance amount in the account
//public-->to assign initial values, to withdraw an amount after checking balance, deposit an amount, display name and balance...
#include <iostream>
#include <string.h>
using namespace std;
class bank{
	string name;
	string type;
	int accountnum;
	int deposit;
	int balance;
	int x;
	
	public:
		void input(){
			//name input
			cout<<"Name:"<<endl;
			cin>>name;
			//account type input
			cout<<"type of acc:"<<endl;
			cin>>type;
			//accountnumber input
			cout<<"account number:"<<endl;
			cin>>accountnum;
			//deposit input
			cout<<"depositing amount:"<<endl;
			cin>>deposit;
			
			balance=deposit;
			cout<<"you're balance is:"<<balance<<endl;
			}
			
			void withdrawal(){
			
				
			cout<<"enter the amount to be withdrawen:"<<endl;
			cin>>x;
			
			if(balance>=x){
				cout<<"Withdrawal succesfull"<<endl;
				cout<<"New balance is:"<<balance-x<<endl;
				
			}
			else
		{
			cout<<"insufficient funds"<<endl;
	
		}
			}
			
			void display(){
				cout<<name<<endl;
				cout<<accountnum<<endl;
				cout<<balance-x<<endl;
				
			}
			
};

int main(){
	
	int y;
	while(1){
		
		cout<<"enter choice"<<endl;
		cout<<"-----------------------"<<endl;
		cout<<"1.open atm"<<endl;
		cout<<"2.exit"<<endl;
		cin>>y;
		if(y==1){
			bank b1;
			b1.input();
			b1.withdrawal();
			b1.display();
		}
		else{
			cout<<"BYE";
			break;
			
		}
	}
return 0;
}
