#include<iostream>
#include<list>

using namespace std;
/*A constructor is a method that is invoked each time we create a specific object of a class
constructors have the same name as the class in question and does not have a return type
I will create two objects of the class department and print out their attributes below*/


class Department{
	public:
		string Name;
		double level;
		list<string> courses;
		
	Department(string name, double Level){//this is the constructor
		Name = name;
		level = Level;
	}
};



int main(){
	
	Department CompE("Computer Engineering", 400);
	CompE.courses.push_back("Digital Signal Processing");
	CompE.courses.push_back("Microcontrollers");
	CompE.courses.push_back("Data Analysis");
	
	Department EEE("Electrical and Electronic Engineering", 400);
	EEE.courses.push_back("Signals and Systems");
	EEE.courses.push_back("Control Systems");
	EEE.courses.push_back("Microcontroller applications");
	
	
	cout<<"Department Name: "<<CompE.Name<<endl;
	cout<<"Level: "<<CompE.level<<endl;
	cout<<"Courses are:"<<endl;
	for(string course : CompE.courses){
		cout<<course<<endl;
	
	cout<<"..."<<endl;
	cout<<"Department Name: "<<EEE.Name<<endl;
	cout<<"Level: "<<EEE.level<<endl;
	cout<<"Courses are:"<<endl;
	for(string course : EEE.courses){
		cout<<course<<endl;
	
}

return 0;
}
