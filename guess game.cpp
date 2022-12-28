#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter a"<<endl;
	cin>>a;
	system("cls");
	cout<<"enter guess"<<endl;
	cin>>b;
	(a==b)? cout<<"correct": cout<<"false";//this is a more "efficient" form of if else statements in one line
}
