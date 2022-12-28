#include<iostream>
using namespace std;

/*Logic of simple ATM machine which can perform
balance,deposit and withdrawal operations using do function declaration and 
recursion(if-else, do-while) */

void Trans(){
	cout<<"*****Menu******"<<endl;
	cout<<"1. Balance"<<endl;
	cout<<"2. Deposit"<<endl;
	cout<<"3. Withdraw"<<endl;
	cout<<"4. exit"<<endl;
	cout<<"*****Exit****"<<endl;
}

int main()
{
int option;
double balance = 500;
do{

Trans();
cout<<"enter option"<<endl;
cin>>option;
system("cls"); //clears what's in the console

switch (option){
	case 1: cout<<"balance is "<<balance<<"frs"<<endl;break;
	case 2: cout<<"Enter deposit amount ";
		double deposit;
		cin>>deposit;
		balance += deposit;
		cout<<"your balance is "<<balance<<"frs"<<endl;
		break;
	case 3: cout<<"Enter withdrawal amount ";
		double withdraw;
		cin>> withdraw;
		if(withdraw <= balance)
		{
			balance -= withdraw;
			cout<<"balance after withdrawal is "<<balance<<endl;
		}	
		else{
			cout<<"your balance is insufficient"<<endl;
		}
		break;
	}
}while(option != 4);
}


	
	
	

