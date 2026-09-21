#include <iostream>
using namespace std;

int main(){
	int rowSize = 2;
	int colSize = 3;
	
	int matrix1[rowSize][colSize] = {
		{10,20,7},
		{1,2,8}
	};
	
	int matrix2[rowSize][colSize] = {
		{2,1,0},
		{12,9,8}
	};
	
	int newMatrix[rowSize][colSize];
	
	// Addition of matrix
	int matrix_add[rowSize][colSize];
	for(int row = 0; row<rowSize; row++){
		for(int col = 0; col<colSize; col++){
			newMatrix[row][col] = matrix1[row][col] + matrix2[row][col];
		}
	}
	
	// Print Matrix;
	for(int row = 0; row<rowSize; row++){
		for(int col = 0; col<colSize; col++){
			cout<<newMatrix[row][col]<<" ";
		}
		cout<<endl;
	}
}
