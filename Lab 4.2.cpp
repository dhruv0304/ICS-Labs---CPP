/*
Name: Dhruv C.
Class: ICS3U1-05
Assignment: Lab 4.2
*/
#include <iostream>
using namespace std;

//Declaring function to determine the validity of the triangle
bool triangleValidation(double sideA, double sideB, double sideC)
{
	//the sum of any two side lengths must be greater than the third in order for the triangle to be valid
	if (sideA + sideB <= sideC || sideA + sideC <= sideB || sideB + sideC <= sideA)
    return false;
	
 return true;
}

//Declaring function that classifies the triangle by its side lengths 
string sideClassification (double sideA, double sideB, double sideC)
{
	if (sideA == sideB && sideB == sideC)//If all sides are equal, it is an equilateral triangle
		return "Equilateral"; //print
	
	else if (sideA == sideB || sideB == sideC || sideA == sideC) //If two sides are equal, it is an isoceles triangle
		return "Isosceles"; //print 
	
	else //otherwise the trianle is a scalene
		return "Scalene"; //print 
}

//Declaring function that classifies the triangle by its angles
string angleClassification(double sideA, double sideB, double sideC) 
{
	double largestSide, smallerSide1, smallerSide2; //Declaring variables 

	//Determining the largest side of the triangle 

	if (sideA >= sideB && sideA >= sideC) largestSide = sideA, smallerSide1 = sideB, smallerSide2 = sideC;

	else if (sideB >= sideA && sideB >= sideC) largestSide = sideB, smallerSide1 = sideA, smallerSide2 = sideC;
	
	else largestSide = sideC, smallerSide1 = sideA, smallerSide2 = sideB;

	//Using pythagorean theorem to classify the triangle by its angles

	//determine if triangle is right 
	if (smallerSide1 * smallerSide1 + smallerSide2 * smallerSide2 == largestSide * largestSide) 
		return "Right"; //print 
	
	//determine if triangle is obtuse 
	else if (smallerSide1 * smallerSide1 + smallerSide2 * smallerSide2 < largestSide * largestSide)
		return "Obtuse"; //print 
	
	//Otherwise the triangle is Acute 
	else 
		return "Acute"; //print 
}

int main() {

	double sideA; double sideB; double sideC; //declaring variables 

	do{
		cout << "Provide three side lenghts (0 0 0) to terminate." << endl; //Console output (print)
		cin >> sideA >> sideB >> sideC; //User input
		
		if (sideA == 0 && sideB == 0 && sideC == 0) break; //If user enters all 0's, terminate the program 

		if (triangleValidation(sideA, sideB, sideC)) //Calling triangleValidation function
		{
			cout << sideA <<" "<< sideB <<" "<< sideC <<" "<<" Triangle possible: "; //Console output (print)

			string side = sideClassification(sideA, sideB, sideC); //Calling sideClassification function 
			cout << side <<" and "; //Console output
			string angle = angleClassification(sideA, sideB, sideC); //Calling angleClassification function 
			cout << angle <<". "<< endl; //Console output (print)
			cout << endl;
		}
		else 
		{
		cout << sideA <<" "<< sideB <<" "<< sideC <<" "<< " Triangle cannot be formed." << endl; //Console output (print)
		cout << endl;
		}
	} while (sideA !=0 || sideB != 0 || sideC !=0); //run loop until the user input is 0 0 0
}
