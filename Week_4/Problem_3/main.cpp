#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, e, f, g;
	cout<<"Enter value of a, b, c, d, e, f, g :- ";
	cin >> a >> b >> c >> d >> e >> f >> g;
	
	double result =  ((a + b / c * d- e) * (f- g)); 
	
	cout << "Result = " << result << endl;
	
	return 0;
}
