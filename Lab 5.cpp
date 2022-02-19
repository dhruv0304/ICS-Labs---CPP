/*
Name: Dhruv C.
Class: ICS3U1-05
Assignment: Lab 5.1
*/
#include <iostream>
#include <string>
using namespace std;

int main() {

	cout <<"----Problem 1----\n\n";

	//Declaring variables 
	string startTime, endTime;
	int startHour, endHour, startMin, endMin, hours, minutes;
	
	cout <<"Input start time: "; //Console output (print)
	cin >> startTime; //User input 
	cout <<"Input end time: "; //Console output (print)
	cin >> endTime; //User input 

	//converting string to integer, then isolating the different numbers  
	startHour = stoi(startTime.substr(0, startTime.find(":")));
    startMin = stoi(startTime.substr(startTime.find(":") + 1));
    endHour = stoi(endTime.substr(0, endTime.find(":")));
    endMin = stoi(endTime.substr(endTime.find(":") + 1));

	//Calculating elapsed time 
    hours = endHour - startHour;
    minutes = endMin - startMin;

    if(minutes < 0){
        hours -= 1;
        minutes += 60;
    }
    cout<<"The elapsed time is "<< hours <<" hours & "<< minutes <<" minutes.\n\n"; //Console output (print)
	cout << endl;

	cout <<"----Problem 2----\n\n";
	string userInput, name, title, age; //Declaring variables 

	cout <<"Input a text: "; //Console output (print)
	cin.ignore(); //Clearing characters from the input buffer
	getline(cin, userInput); //User input
	
	int spaceIndex = userInput.find(" "); //varibale for spaces in the text
	
	//Isolating name, age, and title
	name = userInput.substr(0, spaceIndex);
	age = userInput.substr(spaceIndex +1, userInput.find(" ",spaceIndex +1) - spaceIndex);
	title = userInput.substr(userInput.find(" ",spaceIndex +1) +1);

	//Console output (print)
	cout <<
		"Name: "<< name << '\n' <<
		"Age: "<< age << '\n' <<
		"Title: "<< title << '\n';

	cout << endl;

	cout <<"----Problem 3----\n\n";
	string initial1, initial2, fullName; //Declaring variables 
	char prompt;

	do{
		cout <<"Input name: "; 	//Console output (print)
		getline(cin, fullName); //User input 

		//Isolating first and last name initials 
		initial1 = fullName.substr(0, 1);
		initial2 = fullName.at(fullName.find(" ") +1);

		//Console output (print)
		cout <<
		"First Initial: "<< initial1 << '\n' <<
		"Last Initial: "<< initial2 << '\n';
		
		cout << "Would you like to continue (y/n)? "; //Console output (print)
		cin >> prompt; //User input 
		cin.ignore(); //Clearing characters from the input buffer
		cout << endl;

	}while (prompt == 'Y' || prompt == 'y'); //Loop runs again if user input is "Y" or "y" otherwise the loop ends
	cout <<"Thank you for using the app."; //Console output (print)
	cout << endl;
	cout << endl;

	cout <<"----Problem 4----\n\n";
	string userName, lastName, firstName, middleName, middleInitial; //Declaring Variables 

	cout <<"Please enter your full name: "; //Console output (print)
	getline(cin, userName); //User input

	int spaces = 0; //Counting the number of spaces in the text 
	for (int i = 0; i < userName.length(); i++) //Scanning for spaces in the text 
        if (userName[i] == ' ') spaces++; //If a space is found, add to the counter 

	if (spaces == 2){
		//Isolating the names and the middle name initial
		firstName = userName.substr(0, userName.find(" "));
		middleName = userName.substr(userName.find(" ") +1, userName.find(" ",userName.find(" ") +1) - userName.find(" "));
		middleInitial = middleName.substr(0, 1);
		lastName = userName.substr(userName.find(" ",userName.find(" ") +1) +1);

		cout << lastName <<" , "<< firstName <<" "<< middleInitial <<". "; //Console output (print)
	}

	else {
        int space = userName.find(' ');
		//Isolating first and last name when no middle name is given 
        string firstName = userName.substr(0, space);
        string lastName = userName.substr(space + 1);
        cout << lastName << ", " << firstName << endl; //Console output (print)
    }
	cout << endl;
	cout << endl;

	cout <<"----Problem 5----\n\n";
	//Declaring variables 
	string lineOfText;

	do{
    cout <<"Enter a line of text: "; //Console output (print)
    getline(cin, lineOfText); //User input 
    
    int numOfLetters = 0; //Counts number of letters 

	//Loop that finds and replaces the four lettered words in the user input 
    for (int i = 0; i < lineOfText.length(); ++i) {
        if (isalpha(lineOfText[i])) //Checking if the characters are a part of the alphabet
            numOfLetters++; //Add to counter 
        else {
			//If the word is 4 letters long then replace the word with "Love" or "love"
            if(numOfLetters == 4){
				if (isupper(lineOfText[i - 4])) //Checking if word starts with a capital
					lineOfText.replace(i - 4, 4, "Love");

				else
					lineOfText.replace(i - 4, 4, "love");
			}
            numOfLetters= 0;
        }
    }
    
    cout << lineOfText << endl; //Console output (print)
    
    cout << "Would you like to continue (y/n)? "; //Console output (print)
    cin >> prompt; //User input 
    cin.ignore(); //Clearing characters from the input buffer
    cout << endl;

} while (prompt == 'Y' || prompt == 'y'); //Loop runs again if user input is "Y" or "y" otherwise the loop ends
cout <<"Thank you for using the app." << endl << endl; //Console output (print)

}
