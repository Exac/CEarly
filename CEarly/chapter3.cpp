#include <iostream>
#include "chapter3.h"
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ioStream>
#include <fStream>
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
void three_nineteen()
{
	double a = 125.0;
	cout << setw(6) << a << endl;
	cout << showpoint;
	cout << setw(6) << a << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << setw(6) << a << endl;
}
void three_twenty()
{
	string m1 = "January",
		m2 = "February",
		m3 = "March";
	int d1 = 31,
		d2 = 28,
		d3 = 31;
	double h1 = 22.6,
		h2 = 37.4,
		h3 = 53.9;
	cout << fixed << showpoint << setprecision(1);
	cout << "Month        Days    High\n";
	cout << left << setw(12) << m1
		<< right << setw(4) << d1 << setw(9) << h1 << endl;
	cout << left << setw(12) << m2
		<< right << setw(4) << d2 << setw(9) << h2 << endl;
	cout << left << setw(12) << m3
		<< right << setw(4) << d3 << setw(9) << h3 << endl;
}
void three_twentyone()
{
	string name;
	string city;
	cout << "name: ";// Thomas Mclennan
	cin >> name;
	cout << "city: ";// this then takes "thomas mclennan" as its value
	cin >> city;
	cout << name << " " << city << endl;
	cin.get();
}
void three_twentytwo()
{
	string n,c;
	cout << "name: ";
	getline(cin, n);
	cout << "nity: ";
	getline(cin, c);
	cout << n << endl << c;
	cin.get();
}
void three_twentythree()
{
	char ch;
	cout << "char: ";
	cin >> ch;
	cout << "ch: " << ch;
	cin.get();
}
void three_twentyfour()
{
	char ch;
	cout << "ch: \n";
	cin.get(ch);
	cout << "ch: \n";
	ch = cin.get();
	cout << "ch: \n";
	cin.get();
	cout << "done.";
}
void three_twentyfive()
{
	const int SIZE = 12;
	char name[SIZE];
	cout << "name: " << endl;
	cin >> name;
	cout << "Hello " << name;
	cin.get();
}
void three_twentysix()
{
	const int SIZE = 12;
	char name1[SIZE],
		name2[SIZE];
	strcpy(name1, "Sebastian");
	cout << "name1: " << name1 << endl;
	strcpy(name2,name1);
	cout << "name2: " << name2 << endl;
	cin.get();
}
void three_twentyseven()
{
	const int SIZE = 5;
	char word[SIZE];
	cout << "word: \n";
	cin >> setw(SIZE) >> word;
	cout << word << endl;
}
void three_twentyeight()
{
	const int SIZE = 5;
	char word[SIZE];
	cout << "word: \n";
	cin.width(SIZE);
	cin >> word;
	cout << endl << word;
}
void three_twentynine()
{
	const int SIZE = 81;
	char sentance[SIZE];
	cout << "sentance: ";
	cin.getline(sentance, SIZE);
	cout << sentance << endl;
}
void three_thirty()
{
	double a,b,c;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	c = sqrt(pow(a,2.0) + pow(b,2.0));
	cout << c << endl;
	cin.get();
}
//#include <cstdlib>
void three_thirtyone()
{
	int n1,n2,n3;
	n1=rand();
	n2=rand();
	n3=rand();
	cout << n1 << "\t" << n2 << "\t" << n3 << endl;
	cin.get();
}
void three_thirtytwo()
{
	int n1,n2,n3;
	unsigned seed;
	cout << "seed: ";
	cin >> seed;
	srand(seed);
	n1=rand();
	n2=rand();
	n3=rand();
	cout << n1 << "\t" << n2 << "\t" << n3 << endl;
	cin.get();
}
//#include <ioStream>
//#include <fStream>
void three_thirtythree()
{
	ofstream outputFile;
	outputFile.open("demofile.txt");

	cout << "Writing to file...\n";

	outputFile << "Bach\n";
	outputFile << "Beethoven\n";
	outputFile << "Mozart\n";

	outputFile.close();
	cout << "Done.\n";


}
void three_thirtyfour()
{
	ifstream inputFile;
	string name;

	inputFile.open("demofile.txt");
	cout << "reading information from the file..." << endl;

	inputFile >> name;
	cout << name << endl;
	inputFile >> name;
	cout << name << endl;
	inputFile >> name;
	cout << name << endl;

	inputFile.close();
	cout << "\nDone\n";
	cin.get();
}
void three_thirtyfive()
{
	ifstream inFile;
	int width, length;
	inFile.open("dimensions.txt");
	cout << "Reading \"dimensions.txt\"\n\n";
	inFile >> length >> width;
	cout << "Area of Rectangle:\t" << (length * width) << endl;
	inFile >> length >> width;
	cout << "Area of Rectangle:\t" << (length * width) << endl;
	inFile >> length >> width;
	cout << "Area of Rectangle:\t" << (length * width) << endl;
	inFile >> length >> width;
	cout << "Area of Rectangle:\t" << (length * width) << endl;
	inFile.close();
	cout << "Done.\n" << endl;
	cin.get();

}
void three_thirtysix() // fixed
{
	double n1,n2,n3,avg;
	cout << "n1:";
	cin >> n1;
	cout << "n2:";
	cin >> n2;
	cout << "n3:";
	cin >> n3;
	avg = (n1+n2+n3) / 3; //fixed order-of-operations error
	cout << "Average: " << avg << endl;
	cin.get();
}
void three_thirtyseven()
{
	const double PRICE_PER_CUBIC_YD = 22.0;

	double squareFeet;
	int depth;
	double cubicFeet,
		cubicYards,
		totalPrice;
	cout << "# of ft do cover in mulch: ";
	cin >> squareFeet;
	cout << "depth of mulch: ";
	cin >> depth;
	cubicFeet = squareFeet * (depth / 12.0);
	cubicYards = cubicFeet / 27;
	totalPrice = cubicYards * PRICE_PER_CUBIC_YD;
	cout << "\nNumber of Cubic yards needed: " << cubicYards << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Price per cubic yard: $" << setw(7) << totalPrice << endl << endl;
	cin.get();
}
void three_thirtyeight()
{
	string s1 = "There once was a person named ",
	s2 = " who lived in ",
	s3 = "\nand who loved ",
	s4 = ". At the age of ",
	s5 = ", ",
	s6 = " graduated \nfrom high school and went to work in a ",
	s7 = " factory.\n",
	s8 = " got married and had ",
	s9 = " children and a pet ",
	s10= " named ",
	s11= ".\nEvery weekend the family and ",
	s12= " had fun ",
	s13= " together.";
	// Values input by the user
	string name, city, activity, animal, product, petName;
	int age, kids;
	cout << "Enter the following information and I\'ll "
	<< "tell you a story.\n\n";
	cout << "Your name: ";
	getline(cin, name);

	cout << "The name of a city: ";
	getline(cin, city);
	cout << "A physical activity (e.g. jogging, playing baseball): ";
	getline(cin, activity);
	cout << "An animal: ";
	getline(cin, animal);
	cout << "A food or product you can buy: ";
	getline(cin, product);
	cout << "An adjective noun (e.g. blue car): ";
	getline(cin, petName);
	cout << "A number between 10 and 50: ";
	cin >> age;
	cout << "A number between 0 and 15: ";
	cin >> kids;
	cout << endl << s1 << name << s2 << city << s3 << activity;
	cout << s4 << age << s5 << name << s6 << product << s7;
	cout << name << s8 << kids << s9 << animal << s10 << petName;
	cout << s11 << petName << s12 << activity << s13 << endl;
	cin.get();
}






void chapter3()
{
	three_thirtyeight();
}