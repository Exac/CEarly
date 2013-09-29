#include <iostream>
#include "chapter3.h"
#include <cmath>
using namespace std;

void three_one()
{
	int length, width, area;

	cout << "length:\n";
	cin >> length;
	cout << "width:\n";
	cin >> width;

	area = length * width;

	cout << "area: " << area << endl;
}
void three_two()
{
	int intNum;
	double dubNum;

	cout << "number:" << endl;
	cin >> intNum;
	cout << "float: " << endl;
	cin >> dubNum;
	cout << intNum << " & " << dubNum;
}
void three_three()
{
	int l,w,a;
	cout << "enter length & width separated by space:\n";
	cin >> l >> w;
	a = l * w;
	cout << a;
}
void three_four()
{
	int w;
	double f;
	char c;
	cout << "Enter INT, DOUBLE & a CHAR:\n";
	cin >> w >> f >> c;
	cout << w << endl << f << endl << c;
}
void three_five()
{
	double n, d;
	cout << "n: \n";
	cin >> n;
	cout << "d: \n";
	cin >> d;
	cout << "decimal value is " << (n / d) << endl;
}
//#include <cmath>
void three_six()
{
	double a,r;
	cout << "r: \n";
	cin >> r;
	a = 3.14159 * pow(r, 2);
	cout << "a=" << a << endl;
}
void three_seven()
{
	int b,m;
	double bpm;
	cout << "b: \n";
	cin >> b;
	cout << "m: \n";
	cin >> m;
	bpm = static_cast<double>(b) / m;
	cout << "b/m = " << bpm;
}








void chapter3()
{
	three_seven();
}