#include<iostream>
using namespace std;

int main(){
	
	int num,rev_num = 0;
	cout<<"enter a number to be reversed:"<<endl;
	cin>>num;
	while(num > 0){	
		rev_num *= 10; //multiply content of reverse number variable by 10
		//divide number to be reversed by 10 and add the remainder to rev_num variable
		rev_num += num%10;
		num /=10;//remove last digit of the number by dividing the number by 10
		}
cout<<"reversed number is "<<rev_num<<endl;

	
	return 0;
}
