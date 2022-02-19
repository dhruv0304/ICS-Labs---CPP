/*
Name: Dhruv C.
Class: ICS3U1-05
Assignment: Lab 3.3
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

cout <<"-----Problem 1-----"<< endl << endl;
for(int line = 0; line <= 9; line++) //line goes from 0 to 9 inclusive
{
	for(int num = 0; num <= 9; num++)
		cout << num <<" "; //Console output, prints 0 to line inclusive separated by a space
	
	cout<< endl;
}
cout << endl;

cout <<"-----Problem 2-----"<< endl << endl;
for(int line = 0; line <= 9; line++) //line goes from 0 to 9 inclusive
{
	for(int num = 0; num <= 9; num++)
		cout << line <<" "; //Prints line 10 times 
	
	cout << endl;
}
cout << endl;

cout <<"-----Problem 3-----"<< endl << endl;
for(int line = 0; line <= 9; line++) //line goes from 0 to 9 inclusive
{
	for(int num = 0; num <= line; num++)
		cout << num <<" "; //Console output, prints 0 to line inclusive separated by a space
	
	cout << endl;
}
cout << endl;

cout <<"-----Problem 4-----"<< endl << endl;
for(int line = 9; line >= 0; line--) //line goes from 9 to 0 inclusive
{
	for(int sp = 0; sp < -line + 9; sp++)
		cout <<" " <<" "; //Console output, prints spaces

	for(int num = 0; num <= line; num++)
		cout << num <<" "; //Console output, prints 0 to line inclusive separated by a space
	cout << endl;
}
cout << endl;

cout <<"-----Problem 5-----"<< endl << endl;
srand(time(0));

//Initializing variables (counters)
int rollCount = 0;
int oddCount = 0;

cout <<"Lets roll some dice!" << endl; //Console output (print)

while (oddCount < 3) {
    int diceRoll = rand() % 6 + 1; //Generate random number from 1 to 6
    rollCount++; //Add 1 to counter
    cout <<"You rolled a "<< diceRoll << endl; //Console output (print)
    if (diceRoll % 2) //Determining if number is odd 
        oddCount++; //Add 1 to counter 
    else
        oddCount = 0;
}
cout << "Three in a row in " << rollCount << " rolls"; //Results, console output (print)
}