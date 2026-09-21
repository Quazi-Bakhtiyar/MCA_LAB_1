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
	
	int positiveNumbers = 0;
	int negativeNumbers = 0;
	int oddNumbers = 0;
	int evenNumbers = 0;
	
	for(int i = 0; i<size; i++){
		int currentElem = arr[i];
		if(currentElem >=0){
			positiveNumbers++;
		}
		
		if(currentElem < 0){
			negativeNumbers++;
		}
		
		if(currentElem %2 == 0){
			evenNumbers++;
		}else{
			oddNumbers++;
		}
	}
	
	cout << "Total +ve numbers: "<<positiveNumbers<<endl;
	cout << "Total -ve numbers: "<<negativeNumbers<<endl;
	cout << "Total odd numbers: "<<oddNumbers<<endl;
	cout << "Total even numbers: "<<evenNumbers<<endl;
	
	
	
	
}
