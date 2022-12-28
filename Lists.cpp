#include<iostream>
#include<list>
using namespace std;

	void FindList(list<int> L, int k){
		int it;
		for(int l= 0; l<= 5; l++){
			it = l;
			if(it== k) 
				cout<<"element is found"<<endl;
			else;
			cout<<"element is not found"<<endl;
			break;
		}
	}
int main(){
	
FindList({1,2,3,4,5}, 1);

return 0;
}
