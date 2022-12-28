#include<iostream>
using namespace std;


class Human{
private:
		
		string Colour;
		
protected:
	string Name;
	int Age;
public:
		Human(string name, string colour, int age){
			Name = name;
			Colour = colour;
			Age = age;
		}
		
void printInfo(){
	cout<<"This human is called "<<Name<<", he is "<<Colour<<" in complexion and "<<Age<<" years old"<<endl;
}
};

class Animal: public Human{
public:
		Animal(string name, string colour, int age) : Human(name,colour,age){}
		
void printInfo(){
	cout<<"This animal is a "<<Name<<" and it is "<<Age<<" years old"<<endl;
}
};


int main()
{
/*	Human boy;
	boy.name = "Kboy";
	boy.colour = "dark";
	boy.age = 21;*/
	Human boy("Kboy","dark", 21);
	boy.printInfo();
	Animal dog("dog","brown",2);
	dog.printInfo();
	
	





	
return 0;
}
