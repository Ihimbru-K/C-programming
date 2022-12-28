#include<iostream>
using namespace std;
int main(){
	
	int num = 2, size = 10, j=0;
	int mult[size];
	for(int i = 1; i<=10; i++){
		//for(int j = 0; j<=size; j++){
		do{
			mult[j] = num*i;
			j = j + 1;
		}while(j<=size);
				
		}	
cout<<"multiplication is: "<<mult[j]<<endl;	

return 0;	
}
