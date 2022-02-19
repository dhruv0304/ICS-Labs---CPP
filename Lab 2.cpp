/*
Name: Dhruv C.
Class: ICS3U1-05
Assignment: Lab 2.1
*/

#include <iostream>
using namespace std;

int main() {

//Problem 1
cout << "----Roman Numeral Converter---- \n";
cout << endl;

//Declaring variable
int num;

//Console output (print), user input
cout <<"Please enter a number (1-10): ";
cin >> num;

cout <<"Roman numeral: ";

//Possible outputs
switch(num) 
{

case 1:
  cout <<"I"; break;

case 2:
  cout <<"II"; break;

case 3:
  cout <<"III"; break;

case 4:
  cout <<"IV"; break;

case 5:
  cout <<"V"; break;

case 6:
  cout <<"VI"; break;

case 7:
  cout <<"VII"; break;

case 8:
  cout <<"VIII"; break;

case 9:
  cout <<"IX"; break;

case 10:
  cout <<"X"; break;

//Input validation 
default:
  cout <<"Invalid Entry!";

}

cout << endl;
cout << endl;

//Problem 2
cout << "----Magic Dates---- \n";
cout << endl;

//Declaring varibales
int month, day, year;

//Console output (print), user input
cout <<"Please enter a month (1-12): ";
cin >> month;

cout <<"Please enter a day: ";
cin >> day;

cout <<"Please enter a year (two-digit): ";
cin >> year;

//Input validation 
if (month > 12 || month < 1)
  cout <<"Invalid Month!";

else if (day > 31 || day < 1)
  cout <<"Invalid Day!";

else if (year > 99 || year < 1)
  cout <<"Invalid Year!";

//Determining whether the date is magic or not
else if (year == month * day)
  cout <<"The date is magic!";

else
  cout <<"The date is not magic.";

cout << endl;
cout << endl;

//Problem 3
cout << "----Bank Charges---- \n";
cout << endl;

//Declaring variables 
int numOfChecks;
int monthlyCharge = 10;
double totalCharge;

//Console output (print), user input
cout <<"Please enter the number of checks written in the past month: ";
cin >> numOfChecks;

//Possible outputs
if (numOfChecks > 0 && numOfChecks < 20)
{
  totalCharge = monthlyCharge + (numOfChecks * 0.10);
  cout <<"The bank's fee for the month is: $"<< totalCharge;
}

else if (numOfChecks >= 20 && numOfChecks <= 39)
{
  totalCharge = monthlyCharge + (numOfChecks * 0.08);
  cout <<"The bank's fee for the month is: $"<< totalCharge;
}

else if (numOfChecks >= 40 && numOfChecks <= 59)
{
  totalCharge = monthlyCharge + (numOfChecks * 0.06);
  cout <<"The bank's fee for the month is: $"<< totalCharge;
}

else if (numOfChecks >= 60)
{
  totalCharge = monthlyCharge + (numOfChecks * 0.04);
  cout <<"The bank's fee for the month is: $"<< totalCharge;
}

//Input validation
else 
  cout <<"Invalid Entry!";

cout << endl;
cout << endl;

//Problem 4
cout << "----The Speed of Sound in Gases---- \n";
cout << endl;

//Delcaring varibales 
int gas;
int seconds;

//Console output (print)
cout <<"List of Gases: \n 1. Carbon dioxide \n 2. Air \n 3. Helium \n 4. Hydrogen \n";
cout << endl;

//Console output (print), user input
cout <<"Please select a gas from the list above (1-4): ";
cin >> gas;

if (gas >= 1 && gas <= 4)
{
  //Console output (print), user input
  cout <<"Please enter the number of seconds it took the sound to travel (0-30): ";
  cin >> seconds;
}
//Input validation
else 
  cout <<"Invalid Entry";

//Possible outputs
switch(gas)
{
  case 1:
    cout <<"The source of the sound was " << 258.0 * seconds <<" meters away from the detection location."; break;
  
  case 2:
    cout <<"The source of the sound was " << 331.5 * seconds <<" meters away from the detection location."; break;
  
  case 3:
    cout <<"The source of the sound was " << 972.0 * seconds <<" meters away from the detection location."; break;
  
  case 4:
    cout <<"The source of the sound was " << 1270.0 * seconds <<" meters away from the detection location."; break;

}
}
