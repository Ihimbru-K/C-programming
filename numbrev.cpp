#include<iostream>
using namespace std;
int main () {
	int pin = 2345, urpin, counter = 0;
	do{
		cout<<"enter your pin"<<endl;
		cin>>urpin;
		counter++;
	}while(counter <3 && urpin!=pin);
	
	if(counter ==3){
		cout<<"your pin is incorrect"<<endl;
	}
	else
		cout<<"succesfuly logged in"<<endl;
	
return 0;	
}
