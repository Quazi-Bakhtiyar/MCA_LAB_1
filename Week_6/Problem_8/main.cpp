#include <iostream>
using namespace std;

int main(){
	int size = 5;
	int arr[] = {1,2,3,4,5,6};
	
	int*ptr = arr;
	
	int sum = 0;
	for(int i = 0; i<size; i++){
		sum += *(ptr + i);
	}
	
	cout<< "Sum of element: "<< sum << endl;
} 
