#include <iostream>
using namespace std;

int main(){
	int a = 5;
	int b = 8;
	
	int* p1 = &a;
	int* p2 = &b;
	
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	
	cout<< "Value of a: "<<a<<endl;
	cout<< "Value of b: "<<b<<endl;
}

