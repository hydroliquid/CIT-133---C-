/*
    Name: Michael Benton
    Class name: CIT 133
    Date Assigned: 9/3/2018
    Date Due: 9/13/2018
    
    Write the pseudocode and the C++ program to calculate and display the area
	of a right triangle, a rectangle, a square, a circle and a cylinder. Make
	sure the prompts for both input and output are descriptive. The pseudocode
	will be placed in the comments section of the C++ program at the beginning
	of the program file. 
    
     This program calculates the area of a right triangle, a rectangle, 
	 a square, a circle and a cylinder.
     Constant-
	 PI - the value of pi 3.143
	 **The value provided 22/7 gives a different answer.
	 it is provided in the comments.  
	 
	 Input-
     triBase - Base of the triangle
     triHeight - Hieght of the triangle
	 triArea - Area of the right triangle
     
     recLength - Length of the rectangle
     recWidth - Width of the rectangle
     recArea - Area of the rectangle
     
     squareSide - Length of one side of the square
     squareArea - Area of the square
     
     circleRadius - Radius of the circle
     circleArea - Area of the circle
     
     cylinderRadius - Radius of the cylinder
     cylinderHeight - Height of the cylinder
     cylinderArea - Area of cylinder
     
     Processing-
     triArea = triBase * triHeight / 2 
	 recArea = recLength * recWidth 
	 squareArea = squareSide * squareSide 
	 circleArea = PI * circleRadius * circleRadius 
	 cylinderArea = 2 * PI * cylinderRadius * cylinderHeight + 2 * PI * cylinderRadius * cylinderRadius
     
     Ouput-
     The output will be asking the user for values and outputing the Areas of the shapes.
     
     Psuedo code - 
     1. Start
     2. Output "Enter a value for the base of the triangle: "
     3. Get triBase
     4. Output "Enter a value for the height of the triangle: "
     5. Get triHeight
     6. Calculation triArea = triBase * triHeight / 2
     
     7. Output "Enter a value for the length of the rectangle: "
     8. Get recLength
     9. Output "Enter a value for the width of the rectangle: "
     10. Get recWidth
     11. Calculation recArea = recLength * recWidth
     
     12. Output "Enter a value for the side of a square: "
     13 Get squareSide
     14. Calculation squareArea = squareSide * squareSide
     
     15. Output "Enter a value for the radius of the circle: "
     16. Get circleRadius
     17. Calculation circleArea = PI * circleRadius * circleRadius 
     
     18. Output "Enter a value or the radius of a cylinder: "
     19. Get cylinderRadius
     20. Output "Enter a value or the height of a cylinder: "
     21. Get cylinderHeight
     22. Calculation cylinderArea = 2 * PI * cylinderRadius * cylinderHeight + 2 * PI * cylinderRadius * cylinderRadius
     
     23. Output "************ I love Geometry!!!!"
     24. Output "Area of the triangle = " << triArea
     25. Output "Area of the rectangle =  " << recArea
     26. Output "Area of the square = " << squareArea
     27. Output "The area of the circle = " << circleArea
     28. Output "The area of the cylinder = " << cylinderArea
       
     Time taken to complete this program: 1 hr 20- mins
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Constant
	const double PI = 3.143;
	//22/7;  The value provided gives a different answer. using 3.143 
	// gets closer to the value in the PDF
	 
	// Setting variables 
    double triBase;
    double triHeight;
	double triArea;
     
    double recLength;
    double recWidth;
    double recArea;
     
    double squareSide;
    double squareArea;
     
    double circleRadius;
    double circleArea;
     
    double cylinderRadius;
    double cylinderHeight;
    double cylinderArea ;
    
    // Ask user for input
    cout << "Enter a value for the base of the triangle: "; 
	cin >> triBase;
	cout << "Enter a value for the height of the triangle: "; 
	cin >> triHeight;
	// Calulate Area
	triArea = triBase * triHeight / 2;
	
	cout << "Enter a value for the length of the rectangle: ";
	cin >> recLength;
    cout << "Enter a value for the width of the rectangle: ";
	cin >> recWidth;
	
	recArea = recLength * recWidth;
	
	cout << "Enter a value for the side of a square: ";
	cin >> squareSide;
	
	squareArea = squareSide * squareSide;
	
    cout << "Enter a value for the radius of the circle: ";
	cin >> circleRadius;
	
	circleArea = PI * (circleRadius * circleRadius);
	
	cout << "Enter a value or the radius of a cylinder: ";
	cin >> cylinderRadius;
    cout << "Enter a value or the height of a cylinder: ";
	cin >> cylinderHeight;
	//cylinderArea = 2 * PI * cylinderRadius * cylinderHeight + 2 * PI * 
	//			   cylinderRadius * cylinderRadius;
	// both version of the calculation get the same answer. Really nice.
	cylinderArea = 2 * (PI * (cylinderRadius * cylinderHeight)) + 2 * (PI * 
				   (cylinderRadius * cylinderRadius));
	
	cout << endl;
	cout << "************ I love Geometry!!!!" << endl;
    cout << "Area of the triangle = " << triArea << endl;
    cout << "Area of the rectangle =  " << recArea << endl;
    cout << "Area of the square = " << squareArea << endl;
    cout << "The area of the circle = " << circleArea << endl;
    cout << "The area of the cylinder = " << cylinderArea << endl;
	
    return 0;
    
    
}
