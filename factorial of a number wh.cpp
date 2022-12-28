#include<iostream>
using namespace std;
int main()
{
	int num, fact = 1;
	cout<<"enter number"<<endl;
	cin>>num;
	for(int c = 1; c <=num; c++){
		fact = fact*c;
	}
	cout<<"factorial of number is"<<fact<<endl;

	
return 0;
}
