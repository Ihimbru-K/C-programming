#include<iostream>
using namespace std;

void print(void* ptr, char type){
	switch(type){
		case 'i': cout<<*((int*)ptr)<<endl;break;
		case 'c': cout<<*((char*)ptr)<<endl;break;
	}
}
int main(){
	int num = 3;
	string letter = "boy";
	print(&num,'i');
	print(&letter, 'c');
	
	
return 0;
}
