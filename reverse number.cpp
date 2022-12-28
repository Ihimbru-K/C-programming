#include<iostream>
using namespace std;

int main(){
	int s = 6;
	int rev_num[s] ;
	int num;
	
	cout<<"enter a number to be reversed"<<endl;
	cin>>num;
	while(num > 0){
		
		for(int i = 0; i<=s; i++)
			rev_num[i] = num%10;
			num /= 10;
		cout<<"reversed number is: "<<rev_num[s]<<endl;
	}


		
	
	
	//cout<<"reversed number is: "<<rev_num<<endl;
	return 0;
}
