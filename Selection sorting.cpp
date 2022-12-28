#include<iostream>
using namespace std;



void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void SelSort(int arr[], int n ){
	int i, j, min;

	for(i = 0; i<=n-1; i++){
	
		min = i;
		for(j = i+1; j<n; j++){
			if(arr[j]<min)
			min = i;
		}
	
		swap(&arr[j],&arr[i]);
	
}
}

	

void print(int arr[], int size){
	int k;
for(k = 0; k<= size; k++)
	cout<<arr[k]<<endl;
	
}


int main()
{
	int arr1[] = {10,8,9,7,6,4,5,3,2,1};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	SelSort(arr1, n);
	//print(arr1,n);
	
	
	
return 0;	
}
