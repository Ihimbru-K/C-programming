#include<iostream>
using namespace std;
int main(){
	int pin = 1234, urpin, counter = 0;
	
	

	do{
		cout<<"enter you pin"<<endl;
		cin>>urpin;
		if(urpin != pin)
			counter++;
		}while(urpin != pin && counter < 3);
		
		if(counter == 3)
				cout<<"you have failed to login"<<endl;
		else
				cout<<"login successful"<<endl;
	
	return 0;
	
}
