#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[] = "TEST";
	char *left = str;
	char *right = str + strlen(str) - 1;
	while(left < right){
		char temp = *left;
		*left = *right;
		*right = temp;
		
		left++;
		right--;
	}
	
	char *ptr = str;
	while(*ptr != '\0'){
		cout<< *ptr << " ";
		ptr++;
	}
	return 0;
}
