#include <iostream>
using namespace std;

int feb(int n){
	if(n<= 1){
		return n;
	}
	
	return feb(n-2) + feb(n - 1);
}

int main(){
	int num;
	cout<<"Enter your number:- ";
	cin>>num;
	
	for(int i= 0; i<num; i++){
		int term = feb(i);
		cout<<term<<" ";
	}
}
