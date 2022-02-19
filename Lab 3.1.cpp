/*
Name: Dhruv C.
Class: ICS3U1-05
Assignment: Lab 3.1
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numberOfPoints; //Initialize LCV
    cin >> numberOfPoints; //User input
	cout << endl;

	//Initialize counters
    int xAxis = 0, yAxis = 0;
    int q1Count = 0, q2Count = 0, q3Count = 0, q4Count = 0; 

    while (numberOfPoints > 0) //Expression (tests LCV)
	{
        --numberOfPoints; //Update LCV

        int x, y, quad; //Initialize variables
		char skip;

		cin >> x >> skip >> y; //User input
        if (x > 0 && y > 0) {
            q1Count++; //Update counter for quadrant 1
            quad = 1;
        }
        else if (x < 0 && y > 0) {
            q2Count++; //Update counter for quadrant 2
            quad = 2;
        }
        else if (x < 0 && y < 0) {
            q3Count++; //Update counter for quadrant 3
            quad = 3;
        }
        else if (x > 0 && y < 0) {
            q4Count++; //Update counter for quadrant 4
            quad = 4;
        }

        if (x == 0) {
            yAxis++; //Update counter for y-axis
			//Console output (print) with correct spacing/formatting
            cout << setw(3) << x << "," << setw(3) << y << setw(12) << " y-axis" << endl; 
        }
        else if (y == 0) {
            xAxis++; //Update counter for x-axis
			//Console output (print) with correct spacing/formatting
            cout << setw(3) << x << "," << setw(3) << y << setw(12) << " x-axis" << endl; 
        }
        else
			//Console output (print) with correct spacing/formatting
            cout << setw(3) << x << "," << setw(3) << y << setw(15) << " Quadrant " << quad << endl; 
		
		cout << endl;
    }
	//Console output (print)
	cout << "========== Summary ==========\n";
    cout << "Number of points in Quadrant 1: " << q1Count << endl;
    cout << "Number of points in Quadrant 2: " << q2Count << endl;
    cout << "Number of points in Quadrant 3: " << q3Count << endl;
    cout << "Number of points in Quadrant 4: " << q4Count << endl;
    cout << "Number of points on the x-axis: " << xAxis << endl;
    cout << "Number of points on the y-axis: " << yAxis << endl;
}
