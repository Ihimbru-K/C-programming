#include<iostream>
#include<list>

using namespace std;

class Department{
	public:
		string Name;
		double level;
		list<string> courses;
};
int main(){
	Department CompE;
	CompE.Name = "Computer Engineering";
	CompE.level = 400;
	CompE.courses = {"Digital Signal Processing","Microcontrollers","Formal Language Theory","Data Analysis","Advanced Computer Achitecture"};
	
	cout<<"Department Name: "<<CompE.Name<<endl;
	cout<<"Level: "<<CompE.level<<endl;
	cout<<"Courses are:"<<endl;
	for(string course : CompE.courses){
		cout<<course<<endl;
	}
	
	
}
