#include<iostream>
using namespace std;

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
	


	

			

	
return 0;		
}
