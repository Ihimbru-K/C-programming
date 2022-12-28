#include<iostream>
using namespace std;
int main(){
	//logical operators and, or, equal to
	cout<<(2&&4 == 0)<<endl;//2 and 4 is false hence console prints 0 otherwise it would print 1
	cout<<(2||4 == 1)<<endl;//2 or 4 is true hence 1
	cout<<(2==4)<<endl;//2 is not equal to 4 hence console prints 0
	return 0;
}
