#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number"<<endl;
	cin>>num;
	if(num == 0)
	{
		cout<<"number is 0"<<endl;
	}
	else if(num<0){
		num = num*(-1);	
		int counter = 0;
		while(num>0){
			num = num/10;
			counter++;
			}
		cout<<"number of digits is: "<<counter<<endl;
	
}
	else{
		int counter = 0;
		while(num>0){
			num = num/10;
			counter++;
		}
		cout<<"number of digits is: "<<counter<<endl;
}
	
	return 0;
}
