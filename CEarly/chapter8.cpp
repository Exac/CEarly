#include <vector>
#include <iostream>
#include <fstream>
#include <ctime>
#include <cctype>
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
	const int NUM_OFFICES = 12;
	ifstream dataIn;
	int office; // Loop counter
	double sales[NUM_OFFICES], // Array to hold the sales data
		totalSales = 0.0, // Accumulator initialized to zero
		averageSales,
		highestSales,
		lowestSales;

	// Open the data file
	dataIn.open("sales.dat");
	if (!dataIn)
		cout << "Error opening data file.\n";
	else
	{ // Fill the array with data from the file
		for (office = 0; office < NUM_OFFICES; office++)
			dataIn >> sales[office];
		dataIn.close();

		// Sum all the array elements
		for (office = 0; office < NUM_OFFICES; office++)
			totalSales += sales[office];

		// Calculate average sales
		averageSales = totalSales / NUM_OFFICES;

		// Find highest and lowest sales amounts
		highestSales = lowestSales = sales[0];
		for (office = 1; office < NUM_OFFICES; office++)
		{
			if (sales[office] > highestSales)
				highestSales = sales[office];
			else if (sales[office] < lowestSales)
				lowestSales = sales[office];
		}
		// Display results
		cout << fixed << showpoint << setprecision(2);
		cout << "Total sales $" << setw(9) << totalSales << endl;
		cout << "Average sales $" << setw(9) << averageSales << endl;
		cout << "Highest sales $" << setw(9) << highestSales << endl;
		cout << "Lowest sales $" << setw(9) << lowestSales << endl;
	}
}
void e_twelve()
{
	char ch;
	int vowelCount = 0;
	string sentance;

	sentance = "I hate cake and any sort of disgustingly fatty food...";

	for(int pos = 0; pos < static_cast<int>(sentance.length()); pos++){
		ch = toupper(sentance[pos]);
		switch(ch){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			vowelCount++;
		}
	}
	cout << "Vowels: " << vowelCount << " in sentance: " << sentance;
}
void e_thirteen()
{
	const int NUM_EMPS = 5;
	int index;
	int hours[NUM_EMPS];
	double payRate[NUM_EMPS];
	double grossPay;
	for (index = 0; index < NUM_EMPS; index++)
	{
		cout << "Hours worked by employee #" << (index + 1) << ": ";
		cin >> hours[index];
		cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
		cin >> payRate[index];
	}
	// Display the data
	cout << "\nHere is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);
	for (index = 0; index < NUM_EMPS; index++)
	{
		grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1);
		cout << ": $" << setw(7) << grossPay << endl;
	}
}
void showValue(int);
void e_fourteen()
{
	const int SIZE = 8;
	int collection[SIZE] = {15,10,51,2337,48,54,45,90};
	for(int index = 0; index < SIZE; index++){
		showValue(collection[index]);
		cout << endl;
	}
}
void showValue(int num)
{
	cout << num << " ";
}
void showValues(int intArray[], int size);
void e_fifteen()
{
	const int S = 8;
	int c[S] = {5,10,90,28,58,83,84,95};
	showValues(c, S);
}
void showValues(int intArray[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << intArray[i] << " ";
	}
	cout << endl;
}
void e_sixteen()
{
	const int S1 = 8;
	const int S2 = 5;
	int s1[] = {5,10,15,20,25,30,35,40};
	int s2[] = {2,4,6,8,10};
	showValues(s1, S1);
	showValues(s2, S2);
}
typedef int arrayType[];
void doubleArray(arrayType, int);
void showValues17(arrayType, int);
void e_seventeen()
{
	const int S = 7;
	arrayType set = {1,2,3,4,5,6,7};
	showValues17(set, S);
	doubleArray(set, S);
	cout << "\n after calling doubleArray(), the values are:\n";
	showValues17(set, S);
}
void showValues17(arrayType nums, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << nums[i] << " " ;
	}
	cout << endl;
}
void doubleArray(arrayType nums, int size)
{
	for(int i = 0; i < size; i++)
	{
		nums[i] *= 2;
	}
}
//eighteen
double sumArray  (double[], int);
double getHighest(double[], int);
double getLowest (double[], int);
void e_eighteen()
{
	const int SIZE = 10;
	double arr[SIZE] = {27,92,2,14,93,9,17,6,96,27};
	cout << "highest: " << getHighest(arr, SIZE) << endl;
	cout << "lowest: " << getLowest(arr, SIZE) << endl;
	cout << "sum: " << sumArray(arr, SIZE) << endl;
}
double sumArray(double a[], int size){
	double sum = 0;
	for(int i = 0; i < size; i++){
		sum += a[i];
	}
	return sum;
}
double getHighest(double a[], int size){
	double highest = a[0];
	for(int i = 0;i < size; ++i){
		if(a[i]>highest){
			highest = a[i];
		}
	}
	return highest;
}
double getLowest(double a[], int size){
	double lowest = a[0];
	for(int i = 0;i < size; ++i){
		if(a[i]<lowest){
			lowest = a[i];
		}
	}
	return lowest;
}
void e_ninteen()
{
	const int LEN = 5;
	const int LEN2 = 12;
	double tdr[LEN][LEN2];
	for(int a = 0; a < LEN; a++){
		for(int b = 0; b < LEN2; b++){
			tdr[a][b] =  (double)time(0);
		}
	}
	for(int i = 0; i < LEN; i++){
		for(int j = 0; j < LEN2; j++){
			cout << tdr[i][j] << " ";
		}
		cout << endl;
	}
}
void e_22()
{
	const int NUM_EMPS = 5;
	vector<int> hours(NUM_EMPS);
	vector<double> payRate(NUM_EMPS);
	double grossPay;
	int index;

	cout << "Enter the hours worked and hourly pay rates of " << NUM_EMPS << " employees. \n";
	for (index = 0; index < NUM_EMPS; index++)
	{
		cout << "Hours worked by employee #" << (index + 1) << ": ";
		cin >> hours[index];
		cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
		cin >> payRate[index];
	}
	// Display each employee’s gross pay
	cout << "\nHere is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);
	for (index = 0; index < NUM_EMPS; index++)
	{
		grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1);
		cout << ": $" << setw(7) << grossPay << endl;
	}
}
void e_pointertest(){
	double t1 = 100.0;
	double t2;
	//t2 = &t1;
	cout << t2 << endl;
	t2 += 333;
	cout << t2 << endl;
	cout << "t1:" << t1 << endl;
}

void chapter8()
{
	e_pointertest();
}