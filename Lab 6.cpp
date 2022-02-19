/*
Name: Dhruv C.
Class: ICS3U1-05
Assignment: Lab 5.1
*/
#include <iostream>
#include <iomanip>
using namespace std;

//Question 3 Function
//function that finds the index of the first occurrence of the smallest element in the array
int smallestIndex(int numArray[], int size) { 
    int smallestIndex = 0;
    for (int i = 0; i < size; i++) {
        if (numArray[i] < numArray[smallestIndex])
            smallestIndex = i;
    }
    return smallestIndex;
}

//Question 5 Functions
void input(string students[], double marks[][6]) { //function accumulates user input 
	for (int i = 0; i < 10; i++) {
		cin >> students[i];
		for (int x = 0; x < 5; x++) {
			cin >> marks[i][x];

			marks[i][5] = 0;
		}
	}
}
void gradeArray(double marks[][6], char grade[]) { //determining student's grade
	
	for (int i = 0; i < 10; i++) {
	
		if (marks[i][5] >= 80) 
			grade[i] = 'A';
		
		else if (marks[i][5] >= 70) 
			grade[i] = 'B';
		
		else if (marks[i][5] >= 60) 
			grade[i] = 'C';
		
		else if (marks[i][5] >= 50) 
			grade[i] = 'D';
		
		else 
			grade[i] = 'F';
		
	}
}
void studentAverage(double marks[][6]) { //determining student's average
	
	double totalTestScore; 

	for (int i = 0; i < 10; i++) { //average elements 0 to 4 and put result in 5
		totalTestScore = 0;

		for (int x = 0; x < 5; x++) 
			totalTestScore += marks[i][x];
		
		marks[i][5] = totalTestScore / 5;
	}
}
void output(string students[], double marks[][6], char grade[]) { //function displays the results (the output)

  double totalTestScore = 0;

  cout << endl;
  cout << "Name" << setw(16) << "Average" << setw(10) << "Grade" << endl << endl; //prints headers
  for (int i = 0; i < 10; i++) {

    cout << students[i]; //prints student names 

    cout << setw(18 - students[i].length()) << marks[i][5] << setw(10) << grade[i] << endl; //prints student average and grade

    totalTestScore += marks[i][5];
  }
  cout << endl;
  cout << "Class Average: " << totalTestScore / 10 << endl; //prints class average
}

//Question 7 Functions
void displayNum(int numbers []){ //displaying all integers in the array
	cout << "All integers: "; //Console output (print)
	for (int i = 0; i < 10; i++)
		cout << numbers[i] <<" "; //Console output (print)
	cout << endl;
}
void reverseNum(int numbers []){ //displaying all integers in reverse order
	cout << "All integers in reverse order: "; //Console output (print)
	for (int i = 9; i >= 0; i--)
		cout << numbers[i] << " "; //Console output (print)
	cout << endl;
}
void sumOfNum(int numbers[]){ //display the sum of the integers
	cout <<"Sum of the integers: "; //Console output (print)
	int sumOfNums = 0;
	for(int i = 0; i < 10; i++)
		sumOfNums += numbers[i];
	cout << sumOfNums << endl; //Console output (print)
}
void averageOfNum(int numbers []){ //displaying all values that are higher than the calculated average value
	cout << "Numbers that are high than the average: "; //Console output (print)
	int sum = 0;
	double averageOfNum;
	
	for(int i = 0; i < 10; i++)
		sum += numbers[i];
	
	averageOfNum = sum/10;

	for(int i = 0; i < 10; i++){
		if(numbers[i] > averageOfNum)
			cout << numbers[i] << " "; //Console output (print)
	}
}
int main() {

	cout <<"----Question 1----\n\n";
	int integers[12] = {21, 11, 7, 3, 10, 69, 96, 6, 18, 19, 25, 99}; //array that stores 12 integers

	cout << "Integers from first to last: "; //console out (print)
	for (int i = 0; i < 12; i++)
		cout << integers[i] <<" "; //console out (print), ingeter from first to last
	
	cout << endl;
	cout << "Integers from last to first: "; //console out (print)
	for (int i = 11; i >= 0; i--)
		cout << integers[i] << " "; //console out (print), ingeter from last to first
	
	cout << endl;
	cout << endl;
	
	cout <<"----Question 2----\n\n";
	double alpha[50]; //array alpha of 50 values of type double

	//the  first 25 values are equal to the square of the index variable
	for(int i = 0; i < 25; i++) 
		alpha[i] = i*i;
	
	//last 25 values are equal to the three times the index variable
	for(int i = 25; i < 50; i++) 
		alpha[i] = 3*i;
	
	//10 elements per line are printed
	for (int i = 0; i < 50; i++) { 
   		cout << setw(4) << alpha[i] <<" ";
    	if ((i + 1) % 10 == 0 && i) //New line every 10th line except when i is 0
        	cout << endl;
	}
	cout << endl;
	cout << endl;

	cout <<"----Question 3----\n\n";
    int testArray[10] = {21, 11, 7, 3, 10, 69, 96, 6, 18, 1}; //array that stores 10 numbers
    int smallestPosition = smallestIndex(testArray, 10); //Calling the function 
    cout << "The index of the first occurrence of the smallest element is: " << smallestPosition << endl; //Console output (print)
    cout << "The smallest number is: " << testArray[smallestPosition] << endl; //Console output (print)
	cout << endl;

	cout <<"----Question 4----\n\n";
	string candidates[5]; //array of candidate's last name
	int votes[5]; //array of votes received by the candidates
	int totalVotes = 0; //declaring variable
	int winner = 0; //declaring variable
  
	for(int i = 0; i < 5; i++){
		cout << "Please enter candidate's last name: "; //Console output (print)
		cin >> candidates[i]; //User input

		cout << "Please enter the number of votes received by this candidate: "; //Console output (print)
		cin>>votes[i]; //User input

		cout << endl << endl;

		totalVotes += votes[i]; //calculating total votes

		if(votes[i] > votes[winner]) //determining winner 
			winner = i;
	}
	//Console output (print)
	cout << "Candidates" << setw(28) << "Votes Received" << setw(28) << setprecision(3) << "% of Total Votes" << endl << endl;

	for(int i = 0; i < 5; i++)
		cout<< candidates[i] << setw(32 - candidates[i].length()) <<votes[i]<< setw(29) <<((double)votes[i]/(double)totalVotes)*100 <<endl;
	cout << "Total: " << setw(25) << totalVotes << endl;
	
	cout << endl;
	cout << "The Winner of the Election is " << candidates[winner] << "." << endl; //Console output (print)
	cout << endl;

	cout <<"----Question 5----\n\n";
	string students[10]; //one-dimensional array to store the names of students 
	char grade[10];  //one-dimensional array to store the grades of students
	double marks[10][6]; //two-dimensional array to store the test scores of students

	cout << "Enter 10 lines containing a name then 5 grades: " << endl;

	//calling the functions
	input(students, marks);
	studentAverage(marks);
	gradeArray(marks, grade);
	output(students, marks, grade);
	cout << endl;

	cout <<"----Question 6----\n\n";
	string services[4] = {"battery check","brake inspection","oil change","tire rotation"}; //array of services
	int prices [4] = {15, 5, 25, 22}; //array of prices 
	string userSelection;

	//Console output (print)
	cout <<"*********** Cody’s Car Care Shop ***********\n";
	cout <<"Here is a list of services that are avalible: \n"<< endl;

	//iterate through array and display the avalible services 
	for (int i = 0; i < 4; ++i)
		cout << "- " << services[i] << endl;
	
	cout << "\nPlease input what you would like to do: "; //Console output (print)
	cin >> userSelection; //User input

	userSelection = userSelection.substr(0, 3); //checking first 3 characters of user selection 
	bool found = false;

	//comparing user selection to services avalible
	for (int i = 0; i < 4; ++i) {  
		if (services[i].find(userSelection) == 0) { 
			cout << "A " << services[i] << " will cost you $" << prices[i] << endl << endl; //Console output (print)
			found = true;
			break;
		}
	}
	if (!found)
		cout << "Invalid Input."; //display if user input is invalid 

	cout << endl << endl;

	cout <<"----Question 7----\n\n";
	int numbers[10] = {21, 11, 7, 3, 10, 69, 96, 6, 18, 19}; //array that stores 10 numbers

	//calling functions 
	displayNum(numbers);
	reverseNum(numbers);
	sumOfNum(numbers);
	averageOfNum(numbers);

	cout << endl << endl;
	
	cout <<"----Question 8----\n\n";

	int dimension;
	cout << "Please enter the dimension of the of the square: "; //Console output (print)
	cin >> dimension; //user input

	int matrix [dimension][dimension]; //creating matrix

	//fill matrix
	for(int i = 0; i < dimension; i++) {
        for (int x = 0; x < dimension; x++) {
            cin >> matrix[i][x];
        }
    }
	//declaring variables 
	int sumDiagonal1 = 0;
	int sumDiagonal2 = 0;

	//calculating the sums of the diagonals 
	for(int i = 0; i < dimension; i++) {
        sumDiagonal1 += matrix[i][i];
        sumDiagonal2 += matrix[i][dimension-1-i];
    }
	cout << endl;
	//calculating absolute difference, console output (print)
	cout << "The absolute difference between the sums of its diagonals is: " << abs(sumDiagonal1 - sumDiagonal2) << endl;

}
