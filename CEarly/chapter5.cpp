#include <Windows.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

void five_one()
{
	int x = 10;
	x++;
	++x;
	x--;
	--x;
}
void five_two()
{
	int x = 1;
	cout << ++x << endl;
	cout << x++ << endl;
	cout << x;
}
void five_three()
{
	int num = 1;
	while(num <=5)
	{
		cout << num << endl;
		num++;
	}
}
void five_four()
{
	int players, // Number of available players
		teamPlayers, // Number of desired players per team
		numTeams, // Number of teams
		leftOver; // Number of players left over

	// Get the number of players per team
	cout << "How many players do you wish per team?\n";
	cout << "(Enter a value in the range 9 - 15): ";
	cin >> teamPlayers;

	// Validate the input
	while ((teamPlayers < 9) || (teamPlayers > 15))
	{
		cout << "Team size should be 9 to 15 players.\n";
		cout << "How many players do you wish per team? ";
		cin >> teamPlayers;
	}
	// Get the number of players available
	cout << "How many players are available? ";
	cin >> players;

	// Validate the input
	while (players <= 0)
	{
		cout << "Please enter a positive number: ";
		cin >> players;
	}
	// Calculate the number of teams
	numTeams = players / teamPlayers;

	// Calculate the number of leftover players
	leftOver = players % teamPlayers;

	// Display the results
	cout << "\nThere will be " << numTeams << " teams with " << leftOver << " players left over.\n";
}
void five_five()
{
	int num = 1;

	cout << "Number Square\n";
	cout << "--------------\n";
	while (num <= 5)
	{
		cout << setw(4) << num << setw(7) << (num * num) << endl;
		num++; // Increment counter
	}
}
void five_six()
{

	int num, // Counter telling what number to square
		lastNum; // The final integer value to be squared

	// Get and validate the last number in the table
	cout << "This program will display a table of integer\n"
		<< "numbers and their squares, starting with 1.\n"
		<< "What should the last number be?\n"
		<< "Enter an integer between 2 and 10: ";
	cin >> lastNum;

	while ((lastNum < 2) || (lastNum > 10))
	{ cout << "Please enter an integer between 2 and 10: ";
	cin >> lastNum;
	}
	// Display the table
	cout << "\nNumber Square\n";
	cout << "--------------\n";

	num = 1; // Set the counter to the starting value
	while (num <= lastNum)
	{
		cout << setw(4) << num << setw(7) << (num * num) << endl;
		num++; // Increment the counter
	}
}
void five_seven()
{
	int score1, score2, score3; // Three test scores
	double average; // Average test score
	char again; // Loop again? Y or N

	do
	{ // Get three test scores
		cout << "\nEnter 3 scores and I will average them: ";
		cin >> score1 >> score2 >> score3;

		// Calculate and display the average
		average = (score1 + score2 + score3) / 3.0;
		cout << "The average is " << average << ".\n";

		// Does the user want to average another set?
		cout << "Do you want to average another set? (Y/N) ";
		cin >> again;
	} while ((again == 'Y') || (again == 'y'));
}
void five_eight()
{
	// Constants for membership rates
	const double ADULT_RATE = 40.0;
	const double CHILD_RATE = 20.0;
	const double SENIOR_RATE = 30.0;

	int choice; // Menu choice
	int months; // Number of months
	double charges; // Monthly charges

	do
	{ // Display the menu and get the user's choice
		cout << "\n Health Club Membership Menu\n\n";
		cout << "1. Standard Adult Membership\n";
		cout << "2. Child Membership\n";
		cout << "3. Senior Citizen Membership\n";
		cout << "4. Quit the Program\n\n";
		cout << "Enter your choice: ";
		cin >> choice;

		// Validate the menu selection
		while ((choice < 1) || (choice > 4))
		{
			cout << "Please enter 1, 2, 3, or 4: ";
			cin >> choice;
		}
		// Process the user's choice
		if (choice != 4)
		{ cout << "For how many months? ";
		cin >> months;

		// Compute charges based on user input
		switch (choice)
		{
		case 1: charges = months * ADULT_RATE;
			break;
		case 2: charges = months * CHILD_RATE;
			break;
		case 3: charges = months * SENIOR_RATE;
		}
		// Display the monthly charges
		cout << fixed << showpoint << setprecision(2);
		cout << "The total charges are $" << charges << endl;
		}
	} while (choice != 4);
}
void five_nine()
{
	int n;
	for(n=1; n <= 5; n++)
	{
		cout << setw(4) << n << setw(7) << (n * n) << endl;
	}
}
void five_ten()
{
	int numDays; // Number of days
	double dailySales, // The sales amount for a single day
		totalSales = 0.0, // Accumulator, initialized with 0
		averageSales; // The average daily sales amount

	// Get the number of days
	cout << "For how many days do you have sales figures? ";
	cin >> numDays;

	// Get the sales for each day and accumulate a total
	for (int day = 1; day <= numDays; day++) // day is the counter
	{
		cout << "Enter the sales for day " << day << ": ";
		cin >> dailySales;
		totalSales += dailySales; // Accumulate the running total
	}
	// Compute the average daily sales
	averageSales = totalSales / numDays;

	// Display the total sales and average daily sales
	cout << fixed << showpoint << setprecision(2);
	cout << "\nTotal sales: $" << setw(8) << totalSales;
	cout << "\nAverage daily sales: $" << setw(8) << averageSales
		<< endl;
}
void five_eleven()
{
	int game = 1, // Game counter
		points, // Holds number of points for a specific game
		total = 0; // Accumulates total points for all games
	while (points != -1)
	{ // Add point just read in to the accumulator
		total += points;

		// Enter the points for the next game
		cout << "Enter the points for game " << ++game << ": ";
		cin >> points;
	}
	// Display the total points
	cout << "\nThe total points are " << total << endl;
}
void five_twelve()
{
	int n;
	ifstream inputFile;

	inputFile.open("demofile.txt");
	if(!inputFile){
		cout << "Error opening \"demofile.txt\".";
	}else{
		inputFile >> n;
		while(!inputFile.eof())
		{
			cout << n << "\t";
			inputFile >> n;
		}
		cout << endl;
		inputFile.close();
	}
}
void five_thirteen()
{
	int number;
	ifstream inputFile;

	inputFile.open("numbers.dat"); // Open the file
	if (!inputFile) // Test for errors
		cout << "Error opening file.\n";
	else
	{ while(inputFile >> number) // Read a number and execute the
	{ // loop while read was successful
		cout << number << " "; // Display the number
	}
	cout << endl;
	inputFile.close(); // Close the file
	}
}
void five_fourteen()
{
	int numStudents, // Number of students
		numTests; // Number of tests per student
	double average; // Average test score for a student

	// Get the number of students
	cout << "This program averages test scores.\n";
	cout << "How many students are there? ";
	cin >> numStudents;

	// Get the number of test scores per student
	cout << "How many test scores does each student have? ";
	cin >> numTests;
	cout << endl;

	// Read each student's scores and compute their average
	for (int snum = 1; snum <= numStudents; snum++) // Outer loop
	{ 
		double total = 0.0; // Initialize accumulator

		for (int test = 1; test <= numTests; test++) // Inner loop
		{ 
			int score;

			// Read a score and add it to the accumulator
			cout << "Enter score " << test << " for ";
			cout << "student " << snum << ": ";
			cin >> score;
			total += score; //
		} // End inner loop
		// Compute and display the student's average
		average = total / numTests;
		cout << "The average score for student " << snum;
		cout << " is " << average << "\n\n";
	}
}
void five_fifteen()
{
	double number;

	cout << "Enter 5 positive numbers separated by spaces and \n"
		<< "I will find their square roots: ";

	for (int count = 1; count <= 5; count++)
	{
		cin >> number;
		if (number >= 0.0)
		{ cout << "\nThe square root of " << number << " is "
		<< sqrt(number);
		}
		else
		{ cout << "\n\n" << number << " is negative. "
		<< "I cannot find the square root \n"
		<< "of a negative number. The program is terminating.\n";
		break;
		}
	}
}
void five_sixteen()
{
	string name; // Student first name

	int count = 1, // Student counter
		score, // An individual score read in
		totalScore = 0; // Total of a student's 2 scores
	double average; // Average of a student’s 2 scores

	cout << fixed << showpoint << setprecision(1);
	cout << "Enter the first name of student " << count
		<< " (or Q to quit): ";
	cin >> name;
	while ((name != "Q") && (name != "q"))
	{
		// Get and validate the first score
		cout << "Enter score 1: ";
		cin >> score;
		if ((score <= 0) || (score >= 100))
		{ cout << "Score must be between 0 and 100. Please reenter: ";
		cin >> score;
		}
		totalScore += score; // Add the first score onto the total

		// Get and validate the second score
		cout << "Enter score 2: ";
		cin >> score;
		if ((score <= 0) || (score >= 100))
		{ cout << "Score must be between 0 and 100. Please reenter: ";
		cin >> score;
		}
		totalScore += score; // Add the second score onto the total

		// Calculate and print average
		average = totalScore / 2;
		cout << name << setw(6) << average << endl;

		// Get the next student name
		cout << "Enter the first name of student " << count++
			<< " (or Q to quit): ";
		cin >> name;
	}
}
void five_eighteen()
{
	double loan, // Loan amount
		rate, // Annual interest rate
		moInterestRate, // Monthly interest rate
		years, // Years of loan
		balance, // Monthly balance
		term, // Used to calculate payment
		payment; // Monthly payment
	int numPayments; // Number of payments

	// Get loan information
	cout << "Loan amount: $";
	cin >> loan;
	cout << "Annual interest rate (entered as a decimal): ";
	cin >> rate;
	cout << "Years of loan: ";
	cin >> years;

	// Calculate monthly payment
	numPayments = static_cast<int>(12 * years);
	moInterestRate = rate / 12.0;
	term = pow((1 + moInterestRate), numPayments);
	payment = (loan * moInterestRate * term) / (term - 1.0);

	// Display monthly payment
	cout << fixed << showpoint << setprecision(2);
	cout << "Monthly payment: $" << payment << endl;
	// Display report header
	cout << endl;
	cout << setw(5) << "Month" << setw(10) << "Interest";
	cout << setw(10) << "Principal" << setw(9) << "Balance" << endl;
	cout << "----------------------------------\n";

	balance = loan; // Remaining balance starts out as full loan amount

	// Produce a listing for each month
	for (int month = 1; month <= numPayments; month++)
	{
		double moInterest, // Amount of pmt that pays interest
			principal; // Amount of pmt that lowers the balance

		// Calculate amount paid for this month's interest and principal
		moInterest = moInterestRate * balance; // Calculate interest first
		if (month != numPayments) // If not the final month
			principal = payment - moInterest; // rest of pmt goes
		// to principal

		else // It's the last month so
		{ principal = balance; // pay exact final balance
		payment = balance + moInterest;
		}
		// Calculate new loan balance // Only principal reduces the
		balance -= principal; // balance, not the whole pmt

		// Display this month's payment figures
		cout << setw(4) << month << setw(10) << moInterest;
		cout << setw(10) << principal << setw(10) << balance << endl;
	}
}
//#include <Windows.h>
void five_nineteen()
{
	// Create a handle to the computer screen.
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	// Write 16 lines in 16 different colors.
	for (int color = 0; color < 16; color++)
	{
		SetConsoleTextAttribute (screen, color);
		cout << " Hello World!" << endl;
		Sleep(4); // Pause between lines to watch them appear
	}
	// Restore the normal text color)
	SetConsoleTextAttribute(screen, 7);
}
void five_twenty()
{
	// Bright Green = 10 Bright Red = 12 Bright Yellow = 14

	// Get the handle to standard output device (the console)
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	// Write the ABCs using 3 colors
	int color = 10; // Staring color = green
	for (char letter = 'A'; letter <= 'Z'; letter++)
	{
		SetConsoleTextAttribute (screen, color); // Set the color
		cout << letter << " " << endl; // Print the letter

		color +=2; // Choose next color
		if (color > 14)
			color = 10;

		Sleep(280); // Pause between characters to watch them appear
	}
	// Restore normal text attribute (i.e. white)
	SetConsoleTextAttribute(screen, 7);
}




void chapter5()
{
	five_twenty();
}