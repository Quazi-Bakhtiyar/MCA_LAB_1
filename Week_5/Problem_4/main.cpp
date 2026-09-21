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
	
	// sum of element
	int sum = 0;
	for(int i = 0; i<size; i++){
		sum += arr[i];
	}
	cout<< "Sum of elements is: " << sum << endl;
	
	
	// Find the length of the array
	int length = sizeof(arr) / sizeof(arr[0]);
	cout<< "Length of the array is: "<< length <<endl;
	
	// Find the second larget element in the array
	int largest = arr[0];
	int secondLargest = INT_MIN;
	
	for(int i = 1; i<size; i++){
		if(arr[i] > largest){
			secondLargest = largest;
			largest = arr[i];
		}else if(arr[i] > secondLargest && arr[i] != largest){
			secondLargest = arr[i];
		}
	}
	
	if(secondLargest == INT_MIN){
		cout<<"There is no second largest element"<<endl;
	}else{
		cout<<"Second Largest element is: "<<secondLargest<<endl;
	}
	
}
