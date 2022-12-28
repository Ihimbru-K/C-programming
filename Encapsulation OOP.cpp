#include<iostream>
#include<list>
/*Encapsulation is an OOP concept in which the attributes of a class should be kept private that is only within the class
and can only be accessed by methods which are given access to modify the attributes of that class
A class method describes the behaviour of a particular class*/
using namespace std;

class Department{
private:   /*This is encapsulation. The attributes of this Department can only be accessed by the class itself and its attribute(studn) can only be modified by a method 
				which we give access to*/
		string Name;
		double level;
		int studn = 0;		//Name, level and courses are the attributes of the Class Department.
		list<string> courses;//They can only be accessed by the class,hence, they are called private members

public:	//The methods of the class are public, hence, can be accessed out of the class
	Department(string name, double Level){//this is the constructor which is used in creating the two departments
		Name = name;
		level = Level;
	}
	
	void AddCourse(string title){ // this method is used to modify the list of courses
		courses.push_back(title);
		
	}
	void GetInfo(){//this is the method used to print out the info of various departments	
		cout<<"Department Name: "<<Name<<endl;
		cout<<"Level: "<<level<<endl;
		cout<<"studn: "<<studn<<endl;
		cout<<"Courses are:"<<endl;
		cout<<"  "<<endl;
		for(string course : courses){
			cout<<course<<endl;
		cout<<"    "<<endl;
		
	}
}
	int AddStudent(){//This method is used to modify the private attribute studn(encapsulation)
		studn++;
	}
	int RemoveStudent(){
		if(studn > 0)
			studn--;
	}
};


class FacDepartment: public Department{	//FacDepartment is a class that inherits all of the public attributes of the Department class
public:
		FacDepartment(string name, double level): Department(name, level){
			
		}
	
};
 



int main(){
	FacDepartment Arts("English", 400);
	//Arts.GetInfo();
	
	
	
	
	Department CompE("Computer Engineering", 400);
	CompE.AddCourse("Digital Signal Processing");
	CompE.AddCourse("Microcontrollers");
	CompE.AddCourse("Data Analysis");
	CompE.AddStudent();

	
	Department EEE("Electrical and Electronic Engineering", 400);
	EEE.AddCourse("Signals and Systems");
	EEE.AddCourse("Control Systems");
	EEE.AddCourse("Microcontroller applications");
	EEE.AddStudent();
	
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
	Arts.GetInfo();


	

return 0;
}
