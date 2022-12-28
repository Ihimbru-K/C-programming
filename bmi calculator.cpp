#include<iostream>
using namespace std;

int mass;
float height,bmi;
int main(){
	cout<<"input your height and mass in that order"<<endl;
	cin>>height;
	cin>>mass;
	bmi = mass/(height*height);
	if(bmi < 18.5){
		cout<<"your bmi is "<<bmi<<",  hence you are underweight"<<endl;
	}
	else if(bmi > 18.5 && bmi <= 24.9){
		cout<<"your bmi is "<<bmi<<",  hence you are normal"<<endl;
	
	}
	else{
		cout<<"your bmi is "<<bmi<<",  hence you are overweight"<<endl;
	}
	
	return 0;
}
