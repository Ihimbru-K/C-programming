#include<iostream>
using namespace std;
/*pointers store a memory location
pointers have to be of the same type with the variable which they hold*/

int main(){
	int n = 4;
	cout<<&n<<endl;//print out the address of our variable  n in memory
	
	int *ptr = &n;// creating a pointer called ptr and storing the address of n into it
	cout<<ptr<<endl;//ptinting out the content of the pointer
	
	*ptr = 10;//dereferencing the pointer i.e removing the address of memory location stored in ptr and rather storing 10 in it
	cout<<*ptr<<endl;
	
	
	
return 0;
}
