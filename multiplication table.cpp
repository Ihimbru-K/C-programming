#include<iostream>
using namespace std;

int main()
{
	//multiplication table programme
	int size = 9, siz = 9, si =12 ;
	int num[size] = {1,2},num2[siz] = {1,2,3,4,5,6,},mult[siz];
	
	for(int i =0; i<=size; i++){
		for(int j=0; j<=siz; j++){
			for(int k =0; k<=si; k++){
				mult[si] = num[i]*num[j];
			}
			cout<<"multiplication table is:"<<mult[si]<<endl;
		}
	}


}
