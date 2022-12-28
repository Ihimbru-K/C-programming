#include<iostream>
using namespace std;
int main(){
	float num1, num2;
	char operation;
	cout<<"Kboy's Calculator"<<endl;
	cin>>num1>>operation>>num2;
	
	switch(operation){
		case '-':cout<<num1<<operation<<num2<<"="<<num1-num2; break;//case 1 if operation is - and so on
		case '+':cout<<num1<<operation<<num2<<"="<<num1+num2; break;
		case '*':cout<<num1<<operation<<num2<<"="<<num1*num2; break;
		case '/':cout<<num2<<operation<<num2<<"="<<num1/num2; break;
		case '%':
			bool isNum1Int, isNum2Int;
			isNum1Int =(int(num1)==num1);//converting num1 and num2 to integers as tru
			isNum2Int = (int(num2)==num2);
			if(isNum1Int && isNum2Int)//if num1 and num 2 are integers
				cout<<num1<<operation<<num2<<"="<<int(num1)%int(num2);//perform the required operations on the integers
			else
				cout<<"number not valid"<<endl;
		default: cout<<"please input a valid operation";
			
	}
	
	return 0;
}
