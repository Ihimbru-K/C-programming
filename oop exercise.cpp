#include<iostream>
#include<list>
using namespace std;


class School{
private:
	string Name;
	double N_stud;
	list<string> Departments;
protected:
	int n_dept;

public:	
	School(string name, double n_stud ){
		Name = name;
		N_stud = n_stud;
		
	}
	
	void AddDept(string dept_name){
		Departments.push_back(dept_name);
	}
	void Info(){
		cout<<"this is the "<<Name<<" of the university of Bamenda"<<endl;
		cout<<endl;
		cout<<"there are "<<N_stud<<" students in "<<Name<<endl;
		cout<<endl;
		cout<<"departments in "<<Name<<" are:"<<endl;
		for(string dept : Departments){
			cout<<dept<<endl;
		}

	}
	void notice(){
		cout<<"you are now in NAHPI"<<endl;
	}
};

class school2: public School{
	public:
		school2(string Name, double N_stud):School(Name, N_stud){}
	void notice(){
		cout<<"you are now in FEMS"<<endl;
		cout<<"there are"<<n_dept<<"departments in fems"<<endl;
	}
};

int main(){
	
	School NAHPI("National Higher Polytechnic Institute", 2000 );
	NAHPI.AddDept("CompE");
	NAHPI.AddDept("EEE");
	NAHPI.AddDept("CEA");
	NAHPI.Info();
	NAHPI.notice();
	cout<<endl;
	school2 FEMS("Faculty of Economics and management sciences", 3000);
	FEMS.AddDept("management");
	FEMS.AddDept("Economic science");
	FEMS.Info();
	FEMS.notice();
	
	
return 0;	
}
