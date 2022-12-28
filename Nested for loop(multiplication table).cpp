#include<iostream>
using namespace std;

int main()
{
	for(int i = 1; i<=10; i++){//each number from 1-10 is multiplied by all numbers from 1-10 in the second for loop
		for(int j = 1; j<=10 j++){//loop over numbers 1-10
			cout<<i<<"*"<<j<<"="<<i*j<<endl;
		}
	}
return 0;
}
