#include<iostream>
using namespace std;
int main(){
int size = 6;
int siz =6;
int arr1[size] = {1,2,3,4,5,6},	arr2[siz] = {2,4,6,8,10,12};

int i,j;
for(int i = 0; i<=size; i++){
	for(j = 0; j<=siz; j++)
		if(arr1[i] != arr2[j])
			cout<<"arr1 and arr2 are not equal"<<endl;	
			
		else;
			cout<<"arr1 and arr2 are equal"<<endl;
			break;

	

			
}
	
return 0;		
}
