#include<iostream>
using namespace std;

int recursive(int n, int m){
	if(n == m)
		return m;
	return n + recursive(n+1, m);
}


int main(){
cout<<"result is"<<recursive(1,100)<<endl;
	
	
return 0;
}
