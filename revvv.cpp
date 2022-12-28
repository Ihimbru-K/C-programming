#include<iostream>
using namespace std;

int main(){
	
	int num,rev_num = 0;
	cout<<"enter a number to be reversed:"<<endl;
	cin>>num;
	while(num > 0){	
		rev_num *= 10;
		rev_num += num%10;
		num /=10;
		}
cout<<"reversed number is "<<rev_num<<endl;

	
	return 0;
}
