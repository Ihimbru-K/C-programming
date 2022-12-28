#include<iostream>
using namespace std;

/*function overload: using the same function name to 
perform slightly different tasks*/

int sum(int a , int b){
	return a +b;
}
float sum(double a, double b){
	return a + b;
}

int main(){
	
	cout<<sum(1,2)<<endl;
	cout<<sum(1.2,2.1)<<endl;
	
return 0;	
}

