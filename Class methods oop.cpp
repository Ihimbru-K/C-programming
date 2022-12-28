#include<iostream>
#include<list>

//A class method describes the behaviour of a particular class
using namespace std;

class Department{
	public:
		string Name;
		double level;
		list<string> courses;
		
	Department(string name, double Level){//this is the constructor which is used in creating the two departments
		Name = name;
		level = Level;
	}
	
	void GetInfo(){//this is the method used to print out the info of various departments	
		cout<<"Department Name: "<<Name<<endl;
		cout<<"Level: "<<level<<endl;
		cout<<"Courses are:"<<endl;
		cout<<"  "<<endl;
		for(string course : courses){
			cout<<course<<endl;
		cout<<"    "<<endl;
		
	}
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
	
	
	/*cout<<"Department Name: "<<CompE.Name<<endl;
	cout<<"Level: "<<CompE.level<<endl;
	cout<<"Courses are:"<<endl;
	for(string course : CompE.courses){
		cout<<course<<endl;
	
	cout<<"..."<<endl;
	cout<<"Department Name: "<<EEE.Name<<endl;
	cout<<"Level: "<<EEE.level<<endl;
	cout<<"Courses are:"<<endl;
	for(string course : EEE.courses){
		cout<<course<<endl;*/
		
/* instead of printing out the objects using their names as  did in the
block of commented code above, I simply invoke the method of the class for
the various objects(departments) in the two lines of code below*/

	CompE.GetInfo();
	EEE.GetInfo(); 


	

//return 0;
}

