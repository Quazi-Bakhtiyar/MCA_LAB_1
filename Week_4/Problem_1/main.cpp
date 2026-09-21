#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter your number:- ";
	cin>>num;
	
	cout<< ( num % 2 == 0 ? "Even Number" : "Odd Number" )<<endl;
}
