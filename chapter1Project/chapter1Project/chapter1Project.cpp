// chapter1Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

//Question 1 Sum and Product of two integer numbers.

void sumAndProduct() {
	int num1, num2, sum, product;
	cout << "Enter the first number\t";
	cin >> num1;
	cout << "Enter the second number\t";
	cin >> num2;
	sum = num1 + num2;
	product = num1 * num2;
	cout << "The sum is\t " << sum << "\n";
	cout << "The product is\t " << product << "\n";
}

//Question 2 Show letter C using FOR loop.

void showCUsingForloop() {
	int i, height, space;
	cout << "Plz enter value greater than 7\n ";
	cout << "Enter the height of C:\t";
	cin >> height;
	space = height / 2 - 1;
	for (i = 0; i < (height / 2) - 2; i++) {

		if (i == 0) {
			for (int j = 0; j < height / 2; j++) {
				cout << " ";
			}
			cout << "C C C\n";
		}
		else if (i == 1) {
			for (int j = 0; j < (height / 2) - 2; j++) {
				cout << " ";
			}
			cout << "C" << "       " << "C\n";
		}
		else {
			for (int k = space; k > 1; k--) {
				cout << " ";
			}
			cout << "C\n";
		}
		space--;
	}

	cout << "C" << endl;
	cout << "C" << endl;
	cout << "C" << endl;


	space = 0;
	for (i = (height / 2) + 1; i < height; i++) {

		if (i == height - 1) {
			for (int j = 0; j < height / 2; j++) {
				cout << " ";
			}
			cout << "C C C\n";
		}
		else if (i == height - 2) {
			for (int j = 0; j < (height / 2) - 2; j++) {
				cout << " ";
			}
			cout << "C" << "       " << "C\n";
		}
		else {
			for (int j = 0; j <space; j++) {
				cout << " ";
			}
			cout << "C\n";
		}
		space++;
	}


}

//Question3 :Monetory Value of coins in cents.

void monetoryValueOfCoin() {
	int quaters, dimes, nickels, cents;
	cout << "Enter the number of quaters \t";
	cin >> quaters;
	cout << "Enter the number of dimes \t";
	cin >> dimes;
	cout << "Enter the number of nickels \t";
	cin >> nickels;
	quaters = quaters * 25;
	dimes = dimes * 10;
	nickels = nickels * 5;
	cents = quaters + dimes + nickels;
	cout << "The monetary value of coins in \t " << cents<<endl;
}

//Qusetion 4:Distance travelled by object in freefall.

void distanceCoveredInFreeFall() {
	int time, acceleration = 32, distance;
	cout << "Enter the time in seconds \t";
	cin >> time;
	distance = (acceleration*pow(time,2)) / 2;
	cout << "The distance of freefall is \t" << distance<<" Feet"<<endl;
}

int main()
{
	
	//sumAndProduct();

	//showCUsingForloop();

	//monetoryValueOfCoin();

	distanceCoveredInFreeFall();

	system("pause");
    return 0;
}

