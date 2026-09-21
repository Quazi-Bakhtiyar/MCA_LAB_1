#include <iostream>

using namespace std;

int main(){
	int arr1[5] = {5,7,10,20,23};
	int arr2[4] = {1,5,22,28};
	
	int size1 = sizeof(arr1)/ sizeof(arr1[0]);
	int size2 = sizeof(arr2)/ sizeof(arr2[0]);
	
	int arr[size1 + size2];
	
	int p1 = size1 - 1;
	int p2 = size2 - 1;
	
	int pos = size1 + size2 - 1;
	
	while(p1 >= 0 && p2 >= 0){
		if(arr1[p1] >= arr2[p2]){
			arr[pos--] = arr1[p1--];
		}else{
			arr[pos--] = arr2[p2--];
		}
	}
	
	while(p1 >=0 ){
		arr[pos--] = arr1[p1--];
	}
	
	while(p2 >=0 ){
		arr[pos--] = arr2[p2--];
	}
	
	// Print new array
	cout<< "New Sorted Array ";
	for(int i = 0; i<size1 + size2; i++){
		cout<< arr[i] << " ";
	}
	cout<<endl;
	
}
