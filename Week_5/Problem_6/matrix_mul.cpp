#include<iostream>
using namespace std;

int main(){
	int rowSizeM1 = 2;
	int colSizeM1 = 3;
	
	int rowSizeM2 = 3;
	int colSizeM2 = 2;
	
	int matrix1[rowSizeM1][colSizeM1] = { 
		{2,3,5}, 
		{4,6,8}
	};
	int matrix2[rowSizeM2][colSizeM2] = {
		{2,3},
		{9,6},
		{2,2}
	};
	
	int newMatrix[rowSizeM1][colSizeM2] = {};
	
	for(int i = 0; i<rowSizeM1; i++){
		for(int j = 0; j<colSizeM2; j++){
			for(int k = 0; k< colSizeM1; k++){
				newMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	
	// Print new matrix
	for(int i = 0; i<rowSizeM1; i++){
		for(int j = 0; j<colSizeM2; j++){
			cout<<newMatrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
