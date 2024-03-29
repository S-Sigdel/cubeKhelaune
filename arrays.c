#include<stdio.h>
/* a brief convention:
   white=w, yellow=y, red=r, orange=o, green=g, blue=b
 */
//function declaration for input and output movements 
int arrayValueTaker(); 
int solvingMotionOutputer();
//function declaration for normal movements
int frontMotion();
int backMotion();
int rightMotion();
int leftMotion();
int upMotion();
int downMotion();
//function declaration for reverse movements
int revFrontMotion();
int revBackMotion();
int revRightMotion();
int revLeftMotion();
int revUpMotion();
int revDownMotion();
int main(){
//function declaration for rotation(transpose)
int rotate90(int arr[2][2]);//vanila transpose
int rotateNeg90(int arr[2][2]);//reverse transpose

}
//initialize global vairable, so that different functions can modify the cube state without passing
char arrayFront[2][2],arrayLeft[2][2],arrayRight[2][2],arrayTop[2][2],arrayDown[2][2],arrayBack[2][2];
int arrayValueTaker(){

	//function to read array from camera and return it back to the main function, will probably use openCV

}
//function definition for each move:

int frontMotion(){
//arrays to modify: front, top, bottom, right, left


//front modification: rotate the matrix 90deg clockwise, array to modify: arrayFront


}
