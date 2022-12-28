#include<iostream>
using namespace std;
/*generics: using the same code with different data types
e.g applying swap function on integer and string variables below*/

template<typename T>
void swap(T& a, T& b){
	T temp = a;
	a = b
	b = temp;
}

int main (){

int y= 3, z=9;
swap<int>(y,z)
cout<<"a"<<"-"<<"b"<<"="<<a -b<<endl;

char c = "yes", d = "no";
swap<char>(c,d)
cout<<c<<d<<endl;

	
}
