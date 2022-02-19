/*
Name: Dhruv C.
Class: ICS3U1-05
Assignment: Lab 4.1
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Problem 1
void Roof()
{
	//Console output (print)
	cout<<
		"  /\\"<< '\n' <<
		" /  \\"<<'\n'<<
		"/____\\"<<'\n';
}

void Base()
{
	//Console output (print)
	cout<<
		"|    |"<<'\n'<<
		"|____|"<<'\n';
}

void Walk()
{
	//Console output (print)
	cout<<
		"  **" <<'\n'<<
		"  **********"<<'\n';
}

//Problem 2

bool isPrime(long num)
{
	if(num == 2)return true; //2 is prime 
	if(num % 2 == 0)return false; //Rule out even numbers 
	if(num < 2)return false; //the number 1 and below are not prime 

	//Try all odd numbers from 3 to square root of num
	for(int factor = 3; (factor*factor) <= num; factor +=2) 
		if(num % factor == 0) return false;
	
	return true;
}

//Problem 3
int diceRoll ()
{
	return rand() % 6 + 1; //Generate random number 
}

int main() {

cout << "---- Problem #1 ----" <<"\n\n";

//Calling the functions 
Roof();
Base();
Walk();

cout<<endl;
cout << "---- Problem #2 ----" <<"\n\n";

//Try all numbers from 2-100 
for (long number = 2; number <= 100; ++number)
	if (isPrime(number))
		cout << number << " ";

cout << endl;
cout << endl;
cout << "---- Problem #3 ----" <<"\n\n";

char prompt;
int points = 1000;
do{
	cout <<"You have "<< points <<" points." <<endl;
	
	int risk;
	cout <<"Points to risk: ";
	cin >> risk;

	//Roll both dice
	int rollOne = diceRoll();
	int rollTwo = diceRoll();
	cout << "Roll is "<< rollOne <<" and "<< rollTwo << endl;
	
	if ((rollOne + rollTwo) % 2 == 0) //If sum of rolls are even 
	{
		cout << "You lose." << endl;
		points -= risk; //Deduct points 
	} 
	else 
	{
		cout <<"You win."<< endl;
		points += risk * 2; //Add points 
	}
	//Prompt asking user to play again 
	cout << "Play again? ";
	cin >> prompt;
	cout << endl;
}
//If user intput is yes then go to top of loop
while (prompt == 'Y' || prompt == 'y'); 
cout << endl;
cout <<"Final score: " << points << endl;
}