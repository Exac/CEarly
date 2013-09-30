#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
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





void chapter5()
{
	five_nine();
}