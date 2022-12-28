#include<iostream>
using namespace std;


int n; 
cout<<"Welcome to National Higher Polytechnic Institute"<<endl;
cout<<"Department of Electrical and Electronic Engineering"<<endl;                                       
int main(){
cout<<"search for a student";
int n;
cin>>n;
if(n==1)

	bool EqualArr(int arr1[], int arr2[], int size1, int size2){


		if(size1!=size2)
		return false;
	
		for(int i = 0; i<=size1; i++){
		for(int j = 0; j<=size2; j++)
			if(arr1[i] != arr2[j])
				return false;
	return true;
}

}

int main(){
	
int size1 = 6, size2 = 6;
int arr1[] = {1,2,3,4,5,6};
cout<<"enter your matricule number"<<endl;
int size =6;
int arr[size];
for(int i = 0; i<=size; i++)
	cin>>arr[i];


	
if(EqualArr(arr1,arr, size1, size))
	cout<<"arr1 and 2 are equal";
else
	cout<<"they are not equal";
	
	
	cout<<"enter choice"<<endl;
	if(n==2)
		int Options(str option);{
		
			cout<<"under which department do you wish to register?"<<endl;
		
			cout<<"Option 1: Electrical"<<endl;
			cout<<"Option 2: Electronic"<<endl;
			cout<<"..."<<endl;
			cout<<"enter option";
			cin>>option
			if(option == "Electrical")
				cout<<"Enter your name"<<endl
				cin>>name;
				int siz = 8;
				int matri[siz];
				for(int k = 0; k<=size; k++)
					matri[k]=rand()%10;
					cout<<"your matricule number is:  "<<matri[siz]<<endl;
	}
				
	else if(n==3)
		str Electrical_students[3] ={"John", "Peter", "Mary"};
		str Electronics_students[3] = {"Tabe", "Kanyimi", "Neba"}
		cout<<"Display students"
		int DispStud(str choice ){
			cout<<"students in which department?"
			cin>>choice
			if(choice == "electrical")
				cout<<"Electrical students are:  "<<Electrical_students<<endl;
			else if(choice == "electronics ")
				cout<<"electronic students are:   "<<Electronic_students<<endl;
			else;
				cout<<"list of all students is:   "<<Electrical_students<<Electronics_students<<endl;
			
		}	
				
return 0;		
}
