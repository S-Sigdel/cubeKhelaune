#include<stdio.h>
int rotate90(int array[2][2]);
int main(){
		int array[2][2];
		printf("Enter the value for array");
		for(int i=0; i<3; i++){
				printf("\n");
				for(int j=0; j<3; j++){
						printf("Enter value for the index [%d][%d] \t \n", i, j);	
						scanf("%d",&array[i][j]);
				}
		}
}
int rotate90(int arrayPassed[2][2]){

		int arrayTemp[2][2];
		for(int i=0; i<3; i++){
			for(int j=0;j<3;j++){
				arrayTemp[i][j]=arrayPassed[i][j];
			}
		}
	//swap values for actual rotation
	
	arrayPassed[2][0]=arrayTemp[0][0];
	arrayPassed[2][1]=arrayTemp[1][0];
	arrayPassed[2][2]=arrayTemp[2][0];
	arrayPassed[1][2]=arrayTemp[2][1];
	arrayPassed[0][2]=arrayTemp[2][2];
	arrayPassed[0][0]=arrayTemp[0][2];
	arrayPassed[0][1]=arrayTemp[1][2];
	arrayPassed[1][0]=arrayTemp[0][1];
}

