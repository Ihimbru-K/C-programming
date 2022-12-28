#include<iostream>
using namespace std;


bool Prime(int num){
	for(int i = 2; i<num; i++){
		if(num % i == 0){
			return false;//or return false
			break;
		}
		return true;
	}
}
	
	

int main(){

int counter = 0;
for(int i = 1; i<= 100000000; i++){
	bool isPrime = Prime(i);
	if(isPrime){
		//cout<<i<<"is prime"<<endl;
		counter++;
	}
}
cout<<"There are "<<counter<<" prime numbers between 1 and a million"<<endl;
	

	
	
return 0;
}
