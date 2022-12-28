#include<iostream>
using namespace std;

int a,b,c;
int main(){
	cout<<"input the 3 sides of the triangle"<<endl;
	cin>>a>>b>>c;
	if(a==b & a==c){
		cout<<"triangle is equilateral"<<endl;
	}
	else if (a==b or a==c){
		cout<<"triangle is isoceles"<<endl;
	}
	else
		cout<<"triangle is scalene"<<endl;
	return 0;
	
	

}
