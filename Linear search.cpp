#include<iostream>
using namespace std;


int LinSearch(int list[], int n, int key){
	for(int i = 0; i< n; i++){
		if(list[i] != key)
			return -1;
		return i;
	}
	
}


int main(){
	int list1[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(list1)/sizeof(list1[0]);
	int k;
	cout<<"enter element to search"<<endl;
	cin>>k;
	
	int index = LinSearch(list1, n, k);
	if(index  == -1)
		cout<<"Element is not found "<<endl;
	
	else if (index == i)
		cout<<"Element is found at index"<<index<<endl;	
	
	
	
	
	
	
	
return 0;
}
