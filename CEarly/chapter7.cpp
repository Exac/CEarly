#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include "Rectangle.h"

using namespace std;
/******************************************************************
* 7-2
******************************************************************/
class Circle
{
private:
	double radius;

public:
	void setRadius(double r)
	{
		radius = r;
	}
	double getArea()
	{
		return 3.14159 * pow(radius, 2);
	}
};
/******************************************************************
* 7-2
******************************************************************/
class Circle2
{
private:
	double radius;

public:			//prototypes
	void setRadius(double);
	double getArea();
};
void Circle2::setRadius(double r)
{
	radius = r;
}
double Circle2::getArea()
{
	return 3.14159 * pow(radius, 2);
}
/******************************************************************
* 7-3
******************************************************************/
/*
class Rectangle
{
private:
double length;
double width;

public :
void setLength(double);
void setWidth(double);
double getLength();
double getWidth();
double getArea();
};
void Rectangle::setLength(double len){
if(len >= 0){
length = len;
}else{
length = 1.0;
}
}
void Rectangle::setWidth(double w){
if(w >= 0){
width = w;
}else{
width = 1.0;
}
}
double Rectangle::getLength(){
return length;
}
double Rectangle::getWidth(){
return width;
}
double Rectangle::getArea(){
return length * width;
}
/******************************************************************
* 7-4
******************************************************************/
class Seven_four
{
public:
	Seven_four()
	{
		cout << "Class Seven_four constructor\n";
	}
};
/******************************************************************
* 7-5
******************************************************************/
class Circle5
{
private:
	double radius;
public:
	Circle5();
	void setRadius(double);
	double getArea();
};
Circle5::Circle5()
{
	radius = 1;
}
void Circle5::setRadius(double r)
{
	if(r>=0){radius = r;}
}
double Circle5::getArea()
{
	return 3.14159 * (radius, 2);
}
/******************************************************************
* 7-6
******************************************************************/
class Sale7
{
private:
	double taxRate;
public:
	Sale7(double rate){
		taxRate = rate;
	}
	Sale7(){
		taxRate = 0;
	}

	double calcSaleCost(double cost){
		double total = cost + cost * taxRate;
		return total;
	}
};
/******************************************************************
* 7-7
******************************************************************/
class Demo7
{
public:
	Demo7();
	~Demo7();
};
Demo7::Demo7(){
	cout << "Demo7::Demo7()" << endl;
}
Demo7::~Demo7(){
	cout << "Deconstructing Demo7::Demo7()";
}
/******************************************************************
* 7-8
******************************************************************/
class SimpleStat8
{
private:
	int largest;
	int sum;
	int count;

	bool isNewLargest(int);
public:
	SimpleStat8();
	bool addNumber(int);
	double getAverage();

	int getLargest()
	{
		return largest;
	}

	int getCount()
	{
		return count;
	}
};
SimpleStat8::SimpleStat8()
{
	largest = sum = count = 0;
}
bool SimpleStat8::addNumber(int num)
{
	bool goodNum = true;
	if(num >= 0){
		sum += num;
		count++;
		if(isNewLargest(num)){
			largest = num;
		}
	}else{
		goodNum = false;
	}
	return goodNum;
}
bool SimpleStat8::isNewLargest(int num)
{
	if(num > largest){
		return true;
	}
	return false;
}
double SimpleStat8::getAverage()
{
	if(count > 0){
		return static_cast<double>(sum) / count;
	}else{
		return 0;
	}
}
/******************************************************************
* 7-9
******************************************************************/
class InventoryItem
{
private:
	int partNum;
	string description;
	int onHand;
	double price;
public:
	void storeInfo(int p, string d, int oH, double cost);

	int getPartNum(){return partNum;}
	string getDescription(){return description;}
	int getOnHand(){return onHand;}
	double getPrice(){return price;}
};
void InventoryItem::storeInfo(int p, string d, int oH, double cost)
{
	partNum = p;
	description = d;
	onHand = oH;
	price = cost;
}
//proto
void StoreValues(InventoryItem&);
void StoreValues(InventoryItem);
void storeValues(InventoryItem &item)
{
	int partNum; // Local variables to hold user input
	string description;
	int qty;
	double price;

	// Get the data from the user
	cout << "Enter data for the new part number \n";
	cout << "Part number: ";
	cin >> partNum;
	cout << "Description: ";
	cin.get(); // Move past the '\n' left in the
	// input buffer by the last input
	getline(cin, description);
	cout << "Quantity on hand: ";
	cin >> qty;
	cout << "Unit price: ";
	cin >> price;

	// Store the data in the InventoryItem object
	item.storeInfo(partNum, description, qty, price);
}
void showValues(InventoryItem item)
{
	cout << fixed << showpoint << setprecision(2) << endl;;
	cout << "Part Number : " << item.getPartNum() << endl;
	cout << "Description : " << item.getDescription() << endl;
	cout << "Units On Hand: " << item.getOnHand() << endl;
	cout << "Price : $" << item.getPrice() << endl;
}
/******************************************************************
* 7-10
******************************************************************/
//same as above but just return the item...
InventoryItem createItem()
{
	InventoryItem tempItem;
	int partNum;
	string description;
	int qty;
	double price;
	// Get the data from the user
	cout << "Enter data for the new part number \n";
	cout << "Part number: ";
	cin >> partNum;
	cout << "Description: ";
	cin.get(); // Move past the '\n' left in the
	// input buffer by the last input
	getline(cin, description);
	cout << "Quantity on hand: ";
	cin >> qty;
	cout << "Unit price: ";
	cin >> price;

	// Store the data in the InventoryItem object and return it
	tempItem.storeInfo(partNum, description, qty, price);
	return tempItem;
}
/******************************************************************
* 7-11
******************************************************************/
class Carpet
{
private:
	double pricePerSqYd;
	Rectangle size;
public:
	void setPricePerSqYd(double p){
		pricePerSqYd = p;
	}
	void setDimensions(double len, double wid){
		size.setLength(len/3);
		size.setWidth(wid/3);
	}
	double getTotalPrice(){
		return (size.getArea() * pricePerSqYd);
	}
};
/******************************************************************
* 7-12
******************************************************************/
void seven_twelve()
{
	Rectangle box;
	double boxLength, boxWidth;
	//Get box length and width
	cout << "This program will calculate the area of a rectangle.\n";
	cout << "What is the length? ";
	cin >> boxLength;
	cout << "What is the width? ";
	cin >> boxWidth;

	if (!box.setLength(boxLength)) // Store the length
		cout << "Invalid box length entered.\n";
	else if (!box.setWidth(boxWidth)) // Store the width
		cout << "Invalid box width entered.\n";
	else // Both values were valid
	{
		cout << "\nHere is the rectangle's data:\n";
		cout << "Length: " << box.getLength() << endl;
		cout << "Width : " << box.getWidth() << endl;
		cout << "Area : " << box.getArea() << endl;
	}
}

/******************************************************************
* 7-14
******************************************************************/
struct PayRoll
{
	int empNumber;
	string name;
	double hours,
		payRate;
};
void seven_fourteen()
{
	PayRoll employee;
	double grossPay;

	employee.empNumber = 27;
	employee.name = "Exact";
	employee.hours = 79.25;
	employee.payRate = 10.25;

	grossPay = employee.hours * employee.payRate;

	cout << "pay: " << grossPay << endl;
}
/******************************************************************
* 7-15
******************************************************************/
struct CostInfo
{
	double food,
		medical,
		licence,
		misc;
};
struct PetInfo
{
	string name;
	string type;
	int age;

	CostInfo cost;

	PetInfo()
	{
		name = "unknown";
		type = "unknown";
		age = 0;
		cost.food = cost.medical = cost.licence = cost.misc = 0;
	}
};
void seven_fifteen()
{
	// Define a PetInfo structure variable called pet
	PetInfo pet;

	// Assign values to the pet member variables.
	// Notice that cost.misc is not assigned a value,
	// so it remains 0, as set by the constructor.
	pet.name = "Sassy";
	pet.type = "cat";
	pet.age = 5;
	pet.cost.food = 300.00;
	pet.cost.medical = 200.00;
	pet.cost.licence = 7.00;

	// Display the total annual costs for the pet
	cout << fixed << showpoint << setprecision(2);
	cout << "Annual costs for my " << pet.age << "-year-old "
		<< pet.type << " " << pet.name << " are $"
		<< (pet.cost.food + pet.cost.medical +
		pet.cost.licence + pet.cost.misc) << endl;
}
/******************************************************************
* 7-16
******************************************************************/
struct InvItem
{
	int partNum;
	string description;
	int onHand;
	double price;
};
void getItemData(InvItem&);
void showItem(const InvItem&);
void seven_sixteen()
{
	InvItem part;
	getItemData(part);
	showItem(part);
}
void getItemData(InvItem&)
{
	cout << "Enter the part number: ";
	cin >> item.partNum;
	cout << "Enter the part description: ";
	cin.get(); // Move past the '\n' left in the
	// input buffer by the last input.
	cin.ignore();
	item.description = "description default";
	cout << "Enter the quantity on hand: ";
	cin >> item.onHand;
	cout << "Enter the unit price: ";
	cin >> item.price;
}
void showItem(const InvItem&)
{
	cout << fixed << showpoint << setprecision(2) << endl;;
	cout << "Part Number : " << item.partNum << endl;
	cout << "Description : " << item.description << endl;
	cout << "Units On Hand: " << item.onHand << endl;
	cout << "Price : $" << item.price << endl;
}
/******************************************************************
* 7-17
******************************************************************/










/******************************************************************
*							M A I N
******************************************************************/
void chapter7()
{
	seven_fifteen();

}
