#include<iostream>
using namespace std;

class Human{
	public:
		float height;
		string name;
		int age;
		
};

int main()
{
	Human boy;
	boy.height =1.60;
	boy.name = "Peter";
	boy.age = 15;
	
	cout<<boy.height<<endl;
	cout<<boy.name<<endl;
	cout<<boy.age<<endl;
	
	return 0;
}
