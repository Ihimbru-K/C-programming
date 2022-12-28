#include<iostream>
using namespace std;
//void pointers

void printNum(int*nptr){//two void pointer functions which each accept numbers and letters respectively
//and print out the dereferenced content of the pointer
	cout<<*nptr<<endl;
}

void printLetter(string*lptr){
	cout<<*lptr<<endl;
}



int main(){
	
	int n = 4;
	printNum(&n);
	
	string l = "me";
	printLetter(&l);
	
	
	
return 0;
}
