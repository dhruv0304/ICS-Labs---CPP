/*
Name: Dhruv C.
Class: ICS3U1-05
Assignment: Lab 3.2
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	//Problem 1
	
	srand(time(0)); //Seed the random number generator with the current time 
	char prompt; //Decalring varibale (Yes or No for deciding to continue)
	
	do {
		int randomNum; //Declaring variable 
		randomNum = rand() % 900 + 100; //Generates number between 100 and 999
		
		//Declaring variable, console output(print), user input
		int guess; 
		cout <<"Play by entering a 3-digit number: ";
		cin >> guess;
		
		//Separating number into singular digits for lottery number and for guess number
		int randomDigit3 = randomNum % 10;
		int randomDigit2 = (randomNum / 10) % 10;
		int randomDigit1 = (randomNum / 10) / 10;
		
		int guessDigit3 = guess % 10;
		int guessDigit2 = (guess / 10) % 10;
		int guessDigit1 = (guess / 10) / 10;
		
		//Console output (print)
		cout <<"Your guess was: "<< guess << endl;
		cout <<"The lottery number was: "<< randomNum << endl;
		int matchingDigits = 0; //Counter for matching digits
		
		if (randomNum == guess) //If exact match, print outcome  
		{
			cout <<"Exact Match!" << endl;
			cout <<"You won: $1,000,000";
		}
		else //Look for matching digits if not an exact match
		{
			if (guessDigit1 == randomDigit1 || guessDigit1 == randomDigit2 || guessDigit1 == randomDigit3) //If digit one matches to any in the random number
				matchingDigits += 1; //Add to counter
		
			if (guessDigit1 != guessDigit2) //If second digit does not match the first then continue, this is done to avoid one digit matching mulitple times
				if (guessDigit2 == randomDigit1 || guessDigit2 == randomDigit2 || guessDigit2 == randomDigit3) //If digit two matches to any in the random number
					matchingDigits += 1; //Add to counter
		
			if (guessDigit2 != guessDigit3) //If third digit does not match the second then continue, this is done to avoid one digit matching mulitple times
				if (guessDigit3 == randomDigit1 || guessDigit3 == randomDigit2 || guessDigit3 == randomDigit3) //If digit three matches to any in the random number
					matchingDigits += 1; //Add to counter
		
			//Possible console outpits (print), message depends on number of digits matched 
			switch(matchingDigits)
			{
				case 1:
				{
					cout <<"You guessed one digit correctly." << endl;
					cout <<"You won: $10"; break;
				}
				case 2:
				{
					cout <<"You guessed two digits correctly." << endl;
					cout <<"You won: $100"; break;
				}
				case 3:
				{
					cout <<"You guessed all three digits correctly but not in correct order." << endl;
					cout <<"You won: $1000"; break;
				}
				default:
				{
					cout <<"No matches." << endl;
					cout <<"You won: $0"; break;
				}
			}
		}
		cout <<"\n\n";
		//Asking user to play again, user input 
		cout <<"Would you like to play again(y/n)?: ";
		cin >> prompt;
		cout << endl;
	} while (prompt == 'y' || prompt == 'Y'); //If they answer yes, go back to the top 
	cout <<"Thank you for playing." << endl; //Print if they answer no
	cout << endl;
	
	//Problem 2
	
	char letter; //Declaring variable 
	
	do {
		cout << "Enter a phrase: "; //Console output (print)
		int counter = 0;
		while (counter < 7) //Run 7 times 
		{
			cin >> letter; //User input 
			
			if (counter == 0) //If running while loop the first time print the following 
				cout<<"The phone number is: ";

			letter = toupper(letter); //Covert each letter recieved to upper case 

			if (letter == ' ') continue; //If it a space, ignore 
			if (counter == 3) //Print the following after 3 letters
				cout <<"-";
			
			//Maps letter to number, possible outcomes 
			switch (letter)
			{
				case 'A':
				case 'B':
				case 'C':
					cout << "2"; break;
				
				case 'D':
				case 'E':
				case 'F':
					cout << "3"; break;
					
				case 'G':
				case 'H':
				case 'I':
					cout << "4"; break;
				
				case 'J':
				case 'K':
				case 'L':
					cout << "5"; break;
				
				case 'M':
				case 'N':
				case 'O':
					cout << "6"; break;
				
				case 'P':
				case 'Q':
				case 'R':
				case 'S':
					cout << "7"; break;
				
				case 'T':
				case 'U':
				case 'V':
					cout << "8"; break;
					
				case 'W':
				case 'X':
				case 'Y':
				case 'Z':
					cout << "9"; break;
				
				default:
					break;
			}
			counter++; //Add to counter 
		}
		cout <<"\n\n";
		//Asking user to process another number, user input
		cout <<"Would you like to process another phrase(y/n)?: ";
		cin.ignore(1000, '\n'); //Clear input buffer until new line 
		cin >> prompt;
		cout << endl;
	} while (prompt == 'y' || prompt == 'Y'); //If they answer yes, go back to the top 
	cout <<"Thank you for using the app." << endl; //Print if they answer no
	cout << endl;
}