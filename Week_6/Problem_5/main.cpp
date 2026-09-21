#include <iostream>
using namespace std;

int main(){
	string str = "abc";
	string *ptr = &str;
	
	cout<< *ptr << endl;
}
