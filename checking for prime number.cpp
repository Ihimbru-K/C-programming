#include<iostream>
using namespace std;
//function to determine whether a number is prime or not


int main()
{
int num;
cout<<"enter a number to be checked"<<endl;
cin>>num;

bool isPrime = true;
for(int i = 2; i<num; i++){
	if(num % i == 0)
		isPrime = false;
		break;
}
if(isPrime){
	cout<<"Prime number"<<endl;
}
else 
	cout<<"not a prime number"<<endl;
	
1
return 0;
}



	

