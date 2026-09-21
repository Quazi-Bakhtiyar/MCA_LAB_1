#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter your number:- ";
	cin>>num;
	
	for(int n = 2; n<=num; n++){
		bool isPrime = true;
		
		for(int i = 2; i<n; i++){
			if(n % i == 0){
				isPrime = false;
				break;
			}
		}
		
		if(isPrime){
			cout<< n << " ";
		}
	}
}
