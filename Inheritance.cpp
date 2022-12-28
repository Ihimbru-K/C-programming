#include<iostream>
#include<list>
using namespace std;
/*inheritance is an oop rule in which a class can inherit the attributes and methods 
of another class(known as a base class)*/

class Department{//this is the base class from which we inherit the attributes and methods of the derived class called Fac Department
private:   /*This is encapsulation. The attributes of this Department can only be accessed by the class itself and its attribute(studn) can only be modified by a method 
				which we give access to*/
		
		double level;
		int studn = 0;		//Name, level and courses are the attributes of the Class Department.
		list<string> courses;//They can only be accessed by the class,hence, they are called private members
protected:
		string Name; //A derived class can only access a protected attribute of the base class

public:	//The methods of the class are public, hence, can be accessed out of the class
	Department(string name, double Level){//this is the constructor which is used in creating the two departments
		Name = name;
		level = Level;
		studn = 0;
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
	void AddStudent(){//This method is used to modify the private attribute studn(encapsulation)
		studn += 1;
	}
	void RemoveStudent(){
		if(studn > 0)
			studn -= 1;
	}
};

class FacDepartment: public Department{	//FacDepartment is a class that inherits all of the public attributes of the Department class
public:
		FacDepartment(string name, double level): Department(name, level){}
			
	void notice(){
		cout<<"Hello arts"<<endl; //The methods of a derived class cannot be accessed by a base class
	}
	void note(){
		cout<<Name<<" department is not under NAHPI"<<endl;
	}
		
	
};
 


int main ()
{
		FacDepartment Arts("English",400);
			Arts.AddCourse("Grammar");
			Arts.AddCourse("Poetry");
			Arts.GetInfo();
			Arts.note();
		/*	Arts.AddStudent();
			Arts.AddStudent();
			Arts.RemoveStudent();
			Arts.notice();*/
		FacDepartment Law("English law",400);
		Law.AddCourse("Law practice");
		Law.AddCourse("Penal code");
		Law.GetInfo();
		Law.note();
		Department CompE("Computer Engineering",400);
		CompE.AddCourse("Digital Signal Processing");
		CompE.AddCourse("Formal language theory");
		CompE.GetInfo();
		
	
	
	
	
return 0;	
}
