#include<iostream>
#include<list>
//#include<string>
using namespace std;


class dept{
		public:
			string Name;
			double Stud_num;
			string courses[6];
		};
int main(){
	dept CompE;
	CompE.Name ="Computer Engineering";
	CompE.Stud_num = 200;
	
	
	cout<<"Name of department is:"<<CompE.Name<<endl;
	cout<<"Number of students is:"<<CompE.Stud_num<<endl;

	
return 0;
}
