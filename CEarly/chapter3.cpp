#include <iostream>
#include "chapter3.h"
#include <cmath>
#include <iomanip>
#include <string>
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
void three_eight()
{
	int n = 65;
	cout << n << endl;
	cout << static_cast<char>(n) << endl;
}
void three_nine()
{
	int b,m;
	double bpm;
	cout << "b: \n";
	cin >> b;
	cout << "m: \n";
	cin >> m;
	bpm = double(b) / m;
	cout << "bpm = " << bpm;
}
void three_ten()
{
	short s = 32767;
	float f = 3.0E-47;
	cout << "s: " << s << endl;
	++s;
	cout << "s+1: " << s << endl; 
	--s;
	cout << "s+1-1: " << s << endl; 
	cout << "f=" << f;
}
void three_eleven()
{
	const double PI = 3.14159;
	double a,r;
	cout << "r:\n";
	cin >> r;
	a = PI * pow(r,2);
	cout << "a=" << a;
}

#define PI 3.14159
void three_twelve()	
{
	double a,r;
	cout << "r: \n";
	cin >> r;
	a = PI * pow(r,2);
	cout << "a:" << a << endl;
}
void three_thirteen()
{
	int a,b,ab,c,d,cd;
	cout << "a&b:\n";
	cin >> ab;
	a = b = ab;
	cout << "c&d:\n";
	cin >> cd;
	c = d = cd;
}
void three_fourteen()
{
	int n1=109,		n2=92034,	n3=82,
		n4=9234,	n5=720,		n6=1,
		n7=82,		n8=992,		n9=9999;
	cout << n1 << " " << n2 << " " << n3 << endl;
	cout << n4 << " " << n5 << " " << n6 << endl;
	cout << n7 << " " << n8 << " " << n9 << endl;
}
//#include <iomanip>
void three_fifteen()
{
	int n1=109,		n2=92034,	n3=82,
		n4=9234,	n5=720,		n6=1,
		n7=82,		n8=992,		n9=9999;
	cout << setw(6) << n1 << setw(6) << n2 << setw(6) << n3 << endl;
	cout << setw(6) << n4 << setw(6) << n5 << setw(6) << n6 << endl;
	cout << setw(6) << n7 << setw(6) << n8 << setw(6) << n9 << endl;
	cin.get();
}
//#include <iomanip>
//#include <string>
void three_sixteen()
{
	int intValue = 3928;
	double doubleValue = 91.5;
	string stringObjectValue = "Jill Q. Jones";

	cout << "(" << setw(5) << intValue << ")" << endl;
	cout << "(" << setw(8) << doubleValue << ")" << endl;
	cout << "(" << setw(16) << stringObjectValue << ")" << endl;
}
//#include <iomanip>
void three_seventeen()
{
	double n1=132.364, n2=26.91;
	double q = n1 / n2;

	cout << q << endl;
	cout << setprecision(5) << q << endl;
	cout << setprecision(4) << q << endl;
	cout << setprecision(3) << q << endl;
	cout << setprecision(2) << q << endl;
	cout << setprecision(1) << q << endl;
}
//#include <iomanip>
void three_eighteen()
{
	double d1,d2,d3,t;

	cout << "d1:\n";
	cin >> d1;
	cout << "d2:\n";
	cin >> d2;
	cout << "d3:\n";
	cin >> d3;
	t=d1+d2+d3;
	cout << "d1:" << setw(8) << d1 << endl;
	cout << "d2:" << setw(8) << d2 << endl;
	cout << "d3:" << setw(8) << d3 << endl;
	cout << "t:" << setw(8) << t << endl;
	cin.get();
}












void chapter3()
{
	three_eighteen();
}