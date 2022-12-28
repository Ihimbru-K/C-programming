#include<iostream>
using namespace std;
int main()
{
	int grade, sum = 0;
	for(int i=0; i<3; i++)
	{
		do{
			cout<<"enter grade "<<i+1<<endl;
			cin>>grade;
		}while(grade<1 || grade>5);
	sum +=grade;
	}
	
	cout<<"sum is:"<<sum<<endl;
	cout<<"grade is:"<<sum/3.0<<endl;
	
return 0;
}
