﻿#include<iostream>
using namespace std;
#define delimiter "\n---------------------------------------------------------\n"
using std::cin;
using std::cout;
using std::endl;

class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
	   //  Constructors:
	Point()
	{
		x = y = 0;
		cout << "DefaultConstructor:\t" << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}

	double distance(Point other)
	{
		//this - точка, для которой вызвался метод 
		//		 (от которой нужно найти расстояние)
		//other - точка, до которой нужно найти расстояние.
		//this - эта точка
		//other - другая точка
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
		return distance;
	}
	void print()const
	{
		cout << "x = " << x << "\tY = " << y << endl;
	}
};
//double distance(Point A, Point B)
//{
//	double x_distance = A.get_x() - B.get_x();
//	double y_distance = A.get_y() - B.get_y();
//	double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
//	return distance;
//
//}
double distance(Point A, Point B)
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y()-B.get_y();
	double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
	return distance;
}

//#define STRUCT_POINT
//#define DISTANCE
void main()
{
	setlocale(LC_ALL, "");
#ifdef STRUCT_POINT
	int a;
	Point A;
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
	cout << (*pA).x << "\t" << (*pA).y << endl;

	cout << sizeof(Point) << endl;
	cout << typeid(A).name() << endl;
#endif 

#ifdef DISTANCE



	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;


	Point B;
	B.set_x(7);
	B.set_y(8);
	cout << B.get_x() << "\t" << B.get_y() << endl;
	cout << "Размер объекта: " << sizeof(B) << endl;
	cout << delimiter << endl;
	cout << "Расстояние от точки A до точки B: " << A.distance(B) << endl;
	cout << delimiter << endl;
	cout << "Расстояние от точки B до точки A: " << B.distance(A) << endl;
	cout << delimiter << endl;
	cout << "Расстояние между точками A и B:   " << distance(A, B) << endl;
	cout << delimiter << endl;
	cout << "Расстояние между точками B и A:   " << distance(B, A) << endl;
	cout << delimiter << endl;
#endif

	int a;

	Point A;  //Default constructor
	A.print();
	//cout << A.get_x() << "\t" << A.get_y() << endl;

}
