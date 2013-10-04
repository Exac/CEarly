#include <iostream>
#include <iomanip>
#include <cmath>

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
*							M A I N
******************************************************************/
void chapter7()
{
	Circle2 circle;

}
