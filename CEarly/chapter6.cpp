#include <Windows.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

//6-1,6-2
void displayMessage()
{
	cout << "displayMessage()" << endl;
}
void six_one()
{
	cout << "six_one()" << endl;
	displayMessage();
}
void six_two()
{
	for(int x = 0; x < 10; x++){
		displayMessage();
	}
}
void first()
{
	cout << "first()" << endl;
}
void second()
{
	cout << "second()" << endl;
}
void six_three()
{
	cout << "six_three()" << endl;
	first();
	second();
}
void deeper()
{
	cout << "deeper()" << endl;
}
void deep()
{
	cout << "deep()" << endl;
	deeper();
}
void six_four()
{
	cout << "six_four()" << endl;
	deep();
}
//proto
void five_first();
void five_second();
void six_five()
{
	cout << "six_five()" << endl;
	five_first();
	five_second();
}
void five_first()
{
	cout << "five_first()" << endl;
}
void five_second()
{
	cout << "five_second()" << endl;
}
//proto
void six_displayValue(int num);
void six_six()
{
	cout << "six_six()" << endl;
	six_displayValue(5);
}
void six_displayValue(int num)
{
	cout << "six_displayValue(" << num << ")" << endl;
}
//proto
void seven_displayValue(int);
void six_seven()
{
	cout << "I am passing several values to displayValue.\n";
	seven_displayValue(5); // Call displayValue with argument 5
	seven_displayValue(10); // Call displayValue with argument 10
	seven_displayValue(2); // Call displayValue with argument 2
	seven_displayValue(16); // Call displayValue with argument 16
	cout << "Now I am back in main.\n";
}
void seven_displayValue(int val)
{
	cout << "seven_displayValue(" << val << ")" << endl;
}
//proto
void eight_showSum(int n1, int n2, int n3);
void six_eight()
{
	cout << "six_eight()" << endl;
	eight_showSum(9,920352,20500202);
}
void eight_showSum(int n1,int n2, int n3)
{
	cout << "eight_showSum(" << n1 << " " << n2 << " " << n3 << ")" << endl << (n1+n2+n3) << endl;
}
//proto
void nine_changeMe(int a);
void six_nine()
{
	cout << "six_nine()" << endl;
	int num = 12;
	cout << num << endl;
	nine_changeMe(num);
	cout << num << endl;
}
void nine_changeMe(int a)
{
	cout << "nine_changeMe(" << a << ")" << endl;
	a = 0;
	cout << "\t  a->" << a << endl;
}
//proto
void ten_divide(double a1, double a2);
void six_ten()
{
	double num1 = 925.92, 
		num2 = 0;
	cout << "six_ten()";
	ten_divide(num1, num2);
}
void ten_divide(double a1, double a2)
{
	cout << "ten_divide(" << a1 << ", " << a2 << ")";
	if(a1 == 0){
		cout << "cannot divide by 0.";
		return;
	}
	cout << (a1 / a2) << endl;
}
//proto
int sum(int i1, int i2);
void six_eleven()
{
	int val1 = 20,
		val2 = 40,
		total;
	total = sum(val1, val2);
	cout << "total = " << total << endl;
}
int sum(int i1, int i2)
{
	return (i1 + i2);
}
//proto
double getRadius();
double square(double num);
void six_twelve()
{
	const double PI = 3.14159;
	double radius;
	double area;
	cout << fixed << showpoint << setprecision(2);
	radius = getRadius();
	area = PI * square(radius);
	cout << "area = " << area << endl;
}
double getRadius()
{
	double rad;
	cout << "Enter radius: ";
	cin >> rad;
	return rad;
}
double square(double num)
{
	return num * num;
}
//prototype
bool isEven(int);
void six_thirteen()
{
	int val;
	cout << "Enter integer: ";
	cin >> val;
	if(isEven(val)){
		cout << val << " is even." << endl;
	}else{
		cout << val << " is odd." << endl;
	}
}
bool isEven(int num){
	if(num%2 == 0)
		return true;
	return false;
}
//prototype
void displayMenu();
int getChoice();
void showFees(string category, double rate, int months);
void six_fourteen()
{
	// Constants for monthly membership rates
	const double ADULT_RATE = 40.00,
		SENIOR_RATE = 30.00,
		CHILD_RATE = 20.00;
	int choice, // Holds the user's menu choice
		months; // Number of months being paid
	// Set numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	do
	{ 
		displayMenu();
		choice = getChoice(); // Assign choice the value returned
		// by the getChoice function
		if (choice != 4) // If user does not want to quit, proceed
		{
			cout << "For how many months? ";
			cin >> months;

			switch (choice)
			{
			case 1: 
				showFees("Adult", ADULT_RATE, months);
				break;
			case 2: 
				showFees("Child", CHILD_RATE, months);
				break;
			case 3: 
				showFees("Senior", SENIOR_RATE, months);
			}
		}
	} while (choice != 4);
}
void displayMenu()
{
	system("cls"); // Clear the screen.
	cout << "\n Health Club Membership Menu\n\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
}
int getChoice()
{
	int choice;
	cin >> choice;
	while(choice < 1 || choice > 4)
	{
		cout << "The only valid choices are between 1 & 4. Enter choice.";
		cin >> choice;
	}
	return choice;
}
void showFees(string memberType, double rate, int months)
{
	cout << endl
		<< "Membership Type : " << memberType << " "
		<< "Number of months: " << months << endl
		<< "Total charges : $" << (rate * months) << endl;

	// Hold the screen until the user presses the ENTER key.
	cout << "\nPress the Enter key to return to the menu. ";
	cin.get(); // Clear the previous \n out of the input buffer
	cin.get(); // wait for [ENTER]
}
//proto
void fifteen_anotherFunction();
void six_fifteen()
{
	int num = 1;
	cout << "six_fifteen(), num = " << num << endl;
	fifteen_anotherFunction();
	cout << "six_fifteen(), num = " << num << endl;
}
void fifteen_anotherFunction()
{
	int num = 20;
	cout << "fifteen_anotherFunction(), num = " << num << endl;
}
//proto 6-16
void sixteen_anotherFunction();
int num = 2;
void six_sixteen()
{
	cout << "six_sixteen(), num = " << num << endl;
	sixteen_anotherFunction();
	cout << "six_sixteen(), num = " << num << endl;
}
void sixteen_anotherFunction()
{
	cout << "sixteen_anotherFunction(), num = " << num << endl;
	num = 50;
	cout << "sixteen_anotherFunction(), num = " << num << endl;
}
int globalNum;
void six_seventeen()
{
	cout << "six_seventeen(), globalNum = " << globalNum << endl;
}
//prototype
double eighteen_getBasePay(double);
double eighteen_getOvertimePay(double);
// Global constants
const double PAY_RATE = 22.55; // Hourly pay rate
const double BASE_HOURS = 40.0; // Max non-overtime hours
const double OT_MULTIPLIER = 1.5; // Overtime multiplier
void six_eighteen()
{
	double hours, // Hours worked
		basePay, // Base pay
		overtimePay = 0.0, // Overtime pay
		totalPay; // Total pay

	// Get the number of hours worked
	cout << "How many hours did you work? ";
	cin >> hours;

	// Get the amount of base pay
	basePay = eighteen_getBasePay(hours);

	// Get overtime pay, if any
	if (hours > BASE_HOURS)
		overtimePay = eighteen_getOvertimePay(hours);

	// Calculate the total pay
	totalPay = basePay + overtimePay;

	// Display the pay
	cout << setprecision(2) << fixed << showpoint;
	cout << "Base pay $" << setw(7) << basePay << endl;
	cout << "Overtime pay $" << setw(7) << overtimePay << endl;
	cout << "Total pay $" << setw(7) << totalPay << endl;
}
double eighteen_getBasePay(double hoursWorked)
{
	double basePay;

	if (hoursWorked > BASE_HOURS)
		basePay = BASE_HOURS * PAY_RATE;
	else
		basePay = hoursWorked * PAY_RATE;

	return basePay;
}
double eighteen_getOvertimePay(double hoursWorked)
{
	double overtimePay;

	if (hoursWorked > BASE_HOURS)
	{
		overtimePay =
			(hoursWorked - BASE_HOURS) * PAY_RATE * OT_MULTIPLIER;
	}
	else
		overtimePay = 0.0;

	return overtimePay;
}
//prototype
void ninteen_california();
const int BIRDS = 500;
void six_ninteen()
{
	cout << "In six_ninteen() there are " << BIRDS << " birds.\n";
	ninteen_california();
}
void ninteen_california()
{
	const int BIRDS = 10000;
	cout << "In ninteen_california() there are " << BIRDS << " birds.\n";
}
//prototype
void twenty_showLocal();
void six_twenty()
{
	twenty_showLocal();
	twenty_showLocal();
}
void twenty_showLocal()
{
	int localNum = 5;
	cout << localNum << endl;
	localNum = 99;
}
//prototype
void twentyone_showStatic();
void six_twentyone()
{
	for (int x = 0; x <= 5; x++)
	{
		twentyone_showStatic();
	}
}
void twentyone_showStatic()
{
	static int numCalls = 0;
	cout << numCalls++ << endl;
}
//prototype
void twentytwo_stars(int starsPerRow = 10, int numRows = 1);
void six_twentytwo()
{
	twentytwo_stars();
	twentytwo_stars(5);
	twentytwo_stars(17,8);
}
void twentytwo_stars(int starsPerRow, int numRows)
{
	for(int i = 0; i < numRows; i++)
	{
		for(int x = 0; x < starsPerRow; x++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
}
//prototype
void twentythree_doubleNum(int &refVar);
void six_twentythree()
{
	int value = 4;
	cout << "main(), value=" << value << endl;
	twentythree_doubleNum(value);
	cout << "main(), value=" << value << endl;

}
void twentythree_doubleNum(int &refVar)
{
	refVar *= 3;
}
//prototype
void twentyfour_getNum(int &);
int twentyfour_doubleNum(int);
void six_twentyfour()
{
	int value;
	twentyfour_getNum(value);
	value = twentyfour_doubleNum(value);
	cout << "That value doubled is " << value << endl;
}
void twentyfour_getNum(int &num)
{
	cout << "Enter number: ";
	cin >> num;
}
int twentyfour_doubleNum(int num)
{
	return num * 2;
}
//prototype
void twentyfive_getNums(int&, int&);
void twentyfive_orderNums(int&, int&);
void six_twentyfive()
{
	int smallnum, bignum;
	twentyfive_getNums(smallnum, bignum);
	twentyfive_orderNums(smallnum, bignum);
	cout << "The two input numbers ordered smallest to biggest are " 
		<< smallnum << " and " << bignum << endl;
}
void twentyfive_getNums(int &input1, int &input2)
{
	cout << "Enter an integer: ";
	cin >> input1;
	cout << "Enter a second integer: ";
	cin >> input2;
}
void twentyfive_orderNums(int &num1, int &num2)
{
	int temp;

	if (num1 > num2) // If the numbers are out of order, swap them
	{ 
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
}
//prototype
void twentysix_readFile(ifstream&);
void six_twentysix()
{
	ifstream dataIn;

	dataIn.open("weather.dat");
	if(dataIn.fail()){
		cout << "Error opening file.\n";
	}else{
		twentysix_readFile(dataIn);
		dataIn.close();
	}
}
void twentysix_readFile(ifstream &file)
{
	int temperature;
	while (file >> temperature){
		cout << temperature << " ";
	}
	cout << endl;
}
//prototype
int twentyseven_square(int);
double twentyseven_square(double);
void six_twentyseven()
{
	double n1 = 923.283425;
	int n2 = 43;
	cout << twentyseven_square(n1) << endl;
	cout << twentyseven_square(n2) << endl;
}
int twentyseven_square(int i)
{
	return i*i;
}
double twentyseven_square(double d)
{
	return d*d;
}







void chapter6()
{
	six_twentyseven();
}