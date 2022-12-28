#include<iostream>
using namespace std;


bool Prime(int num){
	for(int i =2; i < num; i++){
		if(num%i == 0){
			return false;
		}
		return true;
	}
}
int main(){
	int counter = 0;
	for(int i = 1; i <= 10000000000; i++)
	{
		bool isPrime = Prime(i);
		if(isPrime){
			counter ++;
			
		}
		
	}
	cout<<"there are "<<counter<<" prime numbers between 1 and 1 million"<<endl;
	
	
return 0;
}
