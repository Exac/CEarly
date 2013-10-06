#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include "Rectangle.h"

using namespace std;

void e_one()
{
	const int NUM_E = 6;
	int hours[NUM_E];
	hours[0] = 12;
	hours[1] = 8;
	hours[2] = 10;
	hours[3] = 12;
	hours[4] = 8;
	hours[5] = 10;
}
void e_two()
{
	const int NUM_E = 6;
	int hours[NUM_E];
	hours[0] = 12;
	hours[1] = 8;
	hours[2] = 10;
	hours[3] = 12;
	hours[4] = 8;
	hours[5] = 10;
	for (int count = 0; count < NUM_E; count++)
	{
		cout << " " << hours[count];
	}
}
void e_three()
{
	const int SIZE = 6;
	int hours[SIZE];
	int count;
	ifstream datafile;

	datafile.open("weather.dat");
	if(!datafile){
		cout << "Error\n";
	}else{
		for(count = 0; count < SIZE; count++){
			datafile >> hours[count];
		}
		datafile.close();
		cout << "hours:\n";
		for(count = 0; count < SIZE; count++){
			cout << "Employee " << count+1 << ": ";
			cout << hours[count] << endl;
		}
	}
}
void e_five()
{
	const int NUM_MONTHS = 12;
	int days[NUM_MONTHS];

	days[0] = 31; // January
	days[1] = 28; // February
	days[2] = 31; // March
	days[3] = 30; // April
	days[4] = 31; // May
	days[5] = 30; // June
	days[6] = 31; // July
	days[7] = 31; // August
	days[8] = 30; // September
	days[9] = 31; // October
	days[10] = 30; // November
	days[11] = 31; // December

	for (int month = 0; month < NUM_MONTHS; month++)
	{
		cout << "Month " << setw(2) << (month + 1) << " has ";
		cout << days[month] << " days.\n";
	}
}
void e_six()
{
	const int SIZE = 5;
	string name[SIZE] = {"Thomas", "William", "Robert", "Richard", "Mary"};
	string food[SIZE] = {"Sushi", "Pizza", "Cheese", "Steak", "Lamb"};
	for(int i = 0; i < SIZE; i++)
	{
		cout << setw(9) << left << name[i] << " likes " << food[i] << endl;
	}
}
void e_eight()
{
	const int SIZE = 7;
	int numbers[SIZE] = {1, 2, 4, 8}; // Initialize the first 4 elements

	cout << "Here are the contents of the array:\n";
	for (int index = 0; index < SIZE; index++)
		cout << numbers[index] << " ";
	cout << endl;
}
void e_nine()
{
	const int NUM_WORKERS = 5; // Set the number of employees
	int hours[NUM_WORKERS]; // Array to hold each employee's hours
	double payRate; // Hourly pay rate for all employees
	// Input hours worked by each employee
	cout << "Enter the hours worked by \n";
	for (int worker = 0; worker < NUM_WORKERS; worker++)
	{
		cout << "Employee #" << (worker+1) << ": ";
		cin >> hours[worker];
	}

	// Input the hourly pay rate for all employees
	cout << "\nEnter the hourly pay rate for all the employees: ";
	cin >> payRate;

	// Display each employee's gross pay
	cout << "\nHere is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);
	for (int worker = 0; worker < NUM_WORKERS; worker++)
	{
		double grossPay = hours[worker] * payRate;
		cout << "Employee #" << (worker + 1);
		cout << ": $" << setw(7) << grossPay << endl;
	}
}
void e_ten()
{

}



void chapter8()
{
	e_six();
}