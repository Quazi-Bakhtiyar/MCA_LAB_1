#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b, c;
	cout<< "Enter a, b and c:- ";
	cin >> a >> b >> c;
	
	double D = b*b - 4 * a * c;
	
	if(D > 0){
		double root1 = (-b + sqrt(D)) / (2 * a);
		double root2 = (-b - sqrt(D)) / (2 * a);
		cout << "Root 1 = " << root1 << endl;
		cout << "Root 2 = " << root2 << endl;	
	}else if(D == 0){
		double root = -b / (2 * a);
		cout << "Both root are equal: "<<root<<endl;
	}else{
		double realPart = -b / (2 * a);
		double imaginaryPart = sqrt(-D) / (2 * a);
		
		cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
		cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
	}
	
	return 0;
}
