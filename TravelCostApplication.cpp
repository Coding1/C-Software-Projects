﻿// TravelCostApplication.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//variables
	double mpg, distance, gallons, pricePerGallon, totalCost;

	//output using insertion operator
	cout << "Enter mpg" << endl;

	//input using extraction operator
	cin >> mpg;

	cout << "Enter distance in miles: " << endl;
	cin >> distance;
	cout << "Enter price for one gallon of gas: " << endl;
	cin >> pricePerGallon;

	//calculate gallons needed
	gallons = distance / mpg;
	//calculate total cost
	totalCost = gallons * pricePerGallon;
	cout << "Total trip cost: $" << fixed << setprecision(2) << totalCost << endl;
	system("pause");
	return 0;
}

