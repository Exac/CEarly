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









void chapter6()
{
	six_six();
}