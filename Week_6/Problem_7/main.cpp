#include <iostream>
using namespace std;

int main(){
	int arr[] = {5,8,9,6,12,3};
	int *ptr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0; i<size; i++){
		cout<< *ptr << " ";
		ptr++;
	}
	return 0;
}
