#include <iostream>
#include <iterator>
#include <climits>

using namespace std;

int main(){
	int size;
	cout<<"Enter array size: ";
	cin>>size;
	
	int arr[size];
	
	cout<< "Enter your " << size << " element:" << endl;
	for(int i = 0; i<size; i++){
		int el;
		cout << "Element " << i + 1 << ": ";
		cin>> arr[i];
	}
	
	// Print Element
	cout<< "Array elements are: ";
	for(int i = 0; i<size; i++){
		cout<< arr[i] << " ";
	}
	cout<<endl;
	
	// Reverse array
	int left = 0;
	int right = size - 1;
	
	while(left < right){
		int temp = arr[left];
		arr[left++] = arr[right];
		arr[right--] = temp;
	}
	
	// Print reverse array
	cout<< "Reverse Array elements are: ";
	for(int i = 0; i<size; i++){
		cout<< arr[i] << " ";
	}
	cout<<endl;
	
}
