#include <iostream>
using namespace std;

int main(){
	char ch;
	cout << "Enter your character:- ";
	cin>> ch; 
	
	int charNum = (int) ch;
	cout<< "ASCII Value: " << charNum << endl;
	
	int category;

	if(charNum >= 65 && charNum <= 90){
		cout<<"Capital Letter"<<endl;
		category = 1;
	}else if(charNum >= 97 && charNum <= 122){
		cout<<"Small Letter"<<endl;
		category = 2;
	}else if(charNum >= 48 && charNum <= 57) {
		cout<<"Digit"<<endl;
		category = 3;
	}else{
		cout<<"Special Symbol"<<endl;
		category = 4;
	}
	
	switch(category){
		case 1:
			cout<<"Capital Letter"<<endl;
			break;
		case 2:
			cout<<"Small Letter"<<endl;
			break;
		case 3:
			cout<<"Digit";
			break;
		case 4:
			cout<<"Special Symbol"<<endl;
			break;
		default:
			cout<<"Invalid Category"<<endl;
			
	}
}
