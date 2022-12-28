#include<iostream>
using namespace std;

int main(){
	//program to print out numbers between 100-500 divisible by 
	//3 and 5
	int num;
	for(num = 100; num<=500; num++){
		if(num%3 == 0 || num%5 == 0){
			cout<<num<<endl;
		}
	}
	return 0
}
