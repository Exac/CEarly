#include <iostream>
#include <string>
using namespace std;

void two_one(){	cout << "two_one";}
void two_two(){ cout << "two" << "_two";}
void two_three()
{
	cout << "two";
	cout << "_three";
}
void two_four(){cout << "a" << "b" << "c" << "d";}
void two_five()
{
	cout << "a" << endl;
	cout << "b" << endl;
	cout << "c";
}
void two_six()
{
	cout << "a\n";
	cout << "b\n";
	cout << "c";
}
void two_seven()
{
	int number;
	number = 5;
	cout << "number: " << number << endl;
	number = 7;
	cout << "number: " << number;
}
void two_eight()
{
	int apples = 20;
	apples = 15;
}
void two_nine()
{
	int checking = -20;
	unsigned int miles = 4267;
	long days = 4;
	cout << "string " << checking << " " << miles << " " << days;
}
void two_ten()
{
	int floors = 15,
		rooms = 300,
		suites = 30;
	cout << "hotel: " << floors << endl << rooms << endl << suites;
}
void two_eleven()
{
	char letter;
	letter = 65;
	cout << letter << endl;
	letter = 66;
	cout << letter << endl;
}
void two_twelve()
{
	char letter = 'A';
	cout << letter;
	letter = 'B';
	cout << letter;
}
void two_thirteen()
{
	char letter = 'A';
	cout << letter;
	letter = 'B';
	cout << letter;
}
//#include <string>
void two_fourteen()
{
	string movieTitle = "Wheels of Fury";
	cout << "My fav movie is " << movieTitle;
}
void two_fifteen()
{
	float distance = 1.496E8;
	double mass = 1.989E30;
	cout << "d: " << distance << " m: " << mass;
}
void two_sixteen()
{
	bool boolValue = true;
	cout << boolValue << endl;
	boolValue = false;
	cout << boolValue << endl;
}
void two_seventeen()
{
	long double apple;
	cout << "int size: " << sizeof(int) << " bytes.\n";
	cout << "long size: " << sizeof(long) << " bytes.\n";
	cout << "apple size: " << sizeof(apple) << " bytes.\n";
}
void two_eighteen()
{
	string month = "May";
	int year,
		days = 31;
	year = 2013;
	cout << year << days << month;
}






int main()
{
	two_eighteen();

	cin.get();

	return 0;
}
