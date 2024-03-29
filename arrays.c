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

}
//initialize global vairable, so that different functions can modify the cube state without passing
char arrayFront[3][3],arrayLeft[3][3],arrayRight[3][3],arrayTop[3][3],arrayDown[3][3],arrayBack[3][3];
int arrayValueTaker(){

	//function to read array from camera and return it back to the main function, will probably use openCV

}
