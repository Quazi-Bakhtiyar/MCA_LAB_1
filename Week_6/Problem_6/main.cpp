#include <iostream>
using namespace std;

int main(){
	string str1 = "Abu";
	string str2 = "Zaid";
	
	string *ptr1 = &str1;
	string *ptr2 = &str2;
	
	cout<< *ptr1 + " " + *ptr2 << endl;
}
