#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter your number: ";
	cin>>num;
	
	int temp = num;
	
	int powerSum = 0;
	while(temp != 0){
		int lastDigit = temp % 10;
		powerSum += lastDigit * lastDigit * lastDigit;
		temp = temp / 10;
	}
	
	if(num == powerSum){
		cout<<"This is a Armstrong number."<<endl;
	}else{
		cout<<"This is not a Armstrong number."<<endl;
	}
}
