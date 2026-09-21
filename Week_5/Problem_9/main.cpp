#include <iostream>

using namespace std;

int main(){
	int size = 10;
	int arr[size] = {5,7,10,20,23,28,27,2,8,7};
	int target = 7;
	
	int freq =  0;
	for(int i = 0; i<size; i++){
		if(arr[i] == target){
			freq ++;
		}
	}
	
	cout<<"Frequency of your target is: "<< freq << endl;
}
