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









void chapter6()
{
	six_thirteen();
}