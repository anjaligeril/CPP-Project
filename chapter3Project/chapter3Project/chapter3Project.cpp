// chapter3Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

// Question 1:long distance call cost

void costLongDistanceCall() {
	int lengthOfCall;
	char choice, dayL1, dayL2;
	double callStartTime, totalCost;
	do {
		cout << "Enter the start time of the call (0.00-24.00)\t";
		cin >> callStartTime;
		cout << "enter the length of the call in minutes\t";
		cin >> lengthOfCall;
		cout << "Enter the day of the week(Mo,Tu,We,Th,Fr,Sa,Su)\t";
		cin >> dayL1 >> dayL2;
		if ((dayL1 == 's' || dayL1 == 'S') && (dayL2 == 'a' || dayL2 == 'A' || dayL2 == 'u' || dayL2 == 'U')) {
			totalCost = lengthOfCall*0.15;
			cout << "Weekend \n";

		}
		else {
			cout << "WeekDay";
			if (callStartTime >= 8.00 && callStartTime <= 18.00) {
				totalCost = lengthOfCall*0.40;

			}
			else if (callStartTime<8.00 || callStartTime>18.00) {
				totalCost = lengthOfCall*0.25;
			}
		}
		cout << "The Cost of the call is $ \t" << totalCost;
		cout << "\n Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
}

//Question 2:Quadratcic Equation

void rootOfQuardaticEquation() {
	int a, b, c;
	double determinant, root1, root2, real, imaginary;
	char choice;
	do {
		cout << "Enter the value of a \t";
		cin >> a;
		cout << "Enter the value of b\t";
		cin >> b;
		cout << "Enter the value of c \t";
		cin >> c;
		determinant = pow(b, 2) - 4 * a*c;
		if (determinant == 0) {
			root1 = -b / (2 * a);
			cout << "The root of the quadratic equation is \t" << root1<<endl;
		}
		else if (determinant > 0) {
			root1 = (-b + (sqrt(determinant))) / 2 * a;
			root2 = (-b - (sqrt(determinant))) / 2 * a;
			cout << "The root of the quadratic equation is \t" << root1 << "\t" << root2<<endl;
		}
		else {
			real = -b / (2 * a);
			imaginary = sqrt(-determinant) / (2 * a);
			cout << "The root of the quadratic equation is \t";
			cout << real << "+" << imaginary << "i" << "\t";
			cout << real << "-" << imaginary << "i" << endl;

		}
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
}

//question3 : Convert arabic numerals to roman numerals

void convertArabicToRoman() {
	int year, i, x, j, y, z, w, v, u,copyYear;

	cout << "Enter the year: ";
	cin >> year;
	cout << "The Arabic year\t" << year << " in roman letter is \t";
	if (year >= 1000 && year <= 3000) {
		if (year >= 1000) {
			x = year / 1000;
			for (j = 0; j < x; j++) {
				cout << "M";
			}

			year = year % 1000;
		}
		if (year >= 900) {
			cout << "CM";
			year = year % 900;
		}
		else if (year >= 500) {
			y = year / 500;

			for (j = 0; j < y; j++) {
				cout << "D";
			}
			year = year % 500;
		}
		if (year >= 400) {
			cout << "CD";
			year = year % 400;
		}
		else if (year >= 100) {
			z = year / 100;

			for (j = 0; j < z; j++) {
				cout << "C";
			}
			year = year % 100;
		}
		if (year >= 90) {
			cout << "XC";
			year = year % 90;
		}
		else if (year >= 50) {
			w = year / 50;
			for (j = 0; j < w; j++) {
				cout << "L";
			}
			year = year % 50;
		}
		if (year >= 40) {
			cout << "XL";
			year = year % 40;
		}
		else if (year >= 10) {
			v = year / 10;
			for (j = 0; j < v; j++) {
				cout << "X";
			}
			year = year % 10;
		}
		if (year >= 9) {
			cout << "IX";
			year = year % 9;
		}
		else if (year >= 5) {
			u = year / 5;
			for (j = 0; j < u; j++) {
				cout << "V";
			}
			year = year % 5;
		}
		if (year > 4) {
			cout << "IV";
			year = year % 4;
		}
		else if (year >= 1) {

			for (j = 0; j < year; j++) {
				cout << "I";
			}

		}
		
		cout << endl;
	}
	else {
		cout << "enter a valid number between 1000 and 3000";
	}
}


//Question 12: 23 toothpick game

void toothPickGame() {
	int toothPick = 23, numToothPickHuman, numToothPickComputer;
	char choice;
	do {
		while (toothPick != 0) {
			if (toothPick == 1) {
				toothPick = 0;
				cout << "You Loose The game!!!!\n";
				break;
			}
			cout << "The remaining toothpick is \t" << toothPick << "\n";

			cout << "Enter the number of toothpicks you want to withdraw\t";
			cin >> numToothPickHuman;
			//validation of input
			if ((numToothPickHuman < 1 || numToothPickHuman>3) || numToothPickHuman > toothPick) {
				cout << "You need to enter a valid number of toothpick (1-3)..The game is ended ..\n";
				continue;
			}
			else {
				cout << "The No of toothpicks picked by user \t" << numToothPickHuman << "\n";
				toothPick = toothPick - numToothPickHuman;
				//coumpters turn
				if (toothPick > 4) {
					numToothPickComputer = 4 - numToothPickHuman;
					toothPick = toothPick - numToothPickComputer;
					cout << "The No of toothpicks picked by Computer \t" << numToothPickComputer << "\n";
					continue;
				}
				else if (toothPick >= 2 && toothPick <= 4) {
					numToothPickComputer = toothPick - 1;
					cout << "The No of toothpicks picked by Computer \t" << numToothPickComputer << "\n";
					toothPick = 1;
					continue;
				}
				else {
					cout << "\n The computer Looses the game!!! \n";
					break;
				}

			}
		}
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
}



int main()
{
	//costLongDistanceCall();

	//rootOfQuardaticEquation();

	//convertArabicToRoman();

	//toothPickGame();

	system("pause");
    return 0;
}

