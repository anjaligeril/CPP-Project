// chapter5Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

//Queston1:Convert from 24 hour to 12 hour notation.

void showTime(int hour, int minute, char m) {
	cout << "The Time is\t" << hour << ":" << minute << " " << m << "M" << endl;
}

void calculateTime(int hour, int minute) {
	char m;
	int newHour;
	if (hour < 12) {
		m = 'A';
		newHour = hour;
		showTime(newHour, minute, m);
	}
	else {
		m = 'P';
		newHour = hour - 12;
		showTime(newHour, minute, m);
	}
}

void covertTo12HourFormat() {
	int hour, minute;
	char choice;
	do {
		cout << "Enter the hour:\t";
		cin >> hour;
		cout << "Enter the Minute:\t";
		cin >> minute;
		cout << "The time You enterted is \t" << hour << ":" << minute << endl;
		if (hour >= 0 && hour <= 24 && minute >= 0 && minute <= 59) {
			calculateTime(hour, minute);
		}
		else {
			cout << "Please enter a valid time\n";
		}
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');

}

//Question 2:Calculate time after waiting period.


void calculateWaitingTime(int currentHour, int currentMinute, int waitingHour, int waitingMinute) {
	int newWaitingHour, newwaitingMinute, tempMinute, tempHour;
	newwaitingMinute = currentMinute + waitingMinute;
	newWaitingHour = currentHour + waitingHour;
	if (newWaitingHour < 24) {

		if (newwaitingMinute > 59) {
			newWaitingHour = +1;
			newwaitingMinute = newwaitingMinute - 60;
		}
	}
	else {
		newWaitingHour = newWaitingHour - 24;
		if (newwaitingMinute > 59) {
			newWaitingHour = +1;
			newwaitingMinute = newwaitingMinute - 60;
		}
	}

	cout << "The Time after waiting period is\t" << newWaitingHour << ":" << newwaitingMinute << endl;
}

void waitingTimeFromCurrentTime() {
	int currentHour, currentMinute, waitingHour, waitingMinute;
	char choice;
	do {
		cout << "Enter the current hour:\t";
		cin >> currentHour;
		cout << "Enter the current minute:\t";
		cin >> currentMinute;
		cout << "The current time\t " << currentHour << ":" << currentMinute << endl;
		cout << "Enter the waiting hour:\t";
		cin >> waitingHour;
		cout << "Enter the waiting minute:\t";
		cin >> waitingMinute;
		cout << "The waiting  time\t " << waitingHour << ":" << waitingMinute << endl;
		if (currentHour >= 0 && currentHour <= 24 && currentMinute >= 0 && currentMinute <= 59 && waitingMinute >= 0 && waitingMinute <= 59) {
			calculateWaitingTime(currentHour, currentMinute, waitingHour, waitingMinute);
		}
		else {
			cout << "Please enter a valid time\n";
		}
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
}

//Question3:change question 2 to 12 hour format.

void calculateWaitingTime1(int currentHour, int currentMinute, char m, int waitingHour, int waitingMinute) {
	int newWaitingHour, newwaitingMinute, tempMinute, tempHour;
	newwaitingMinute = currentMinute + waitingMinute;
	newWaitingHour = currentHour + waitingHour;
	if (m == 'A' || m == 'a') {
		if (newWaitingHour < 12) {
			if (newwaitingMinute > 59) {
				newWaitingHour = newWaitingHour + 1;
				newwaitingMinute = newwaitingMinute - 60;
				m = 'P';
			}
		}
		else {
			newWaitingHour = newWaitingHour - 12;
			if (newwaitingMinute > 59) {
				newWaitingHour = newWaitingHour + 1;
				newwaitingMinute = newwaitingMinute - 60;
				m = 'P';
			}
		}
	}

	else if (m == 'P' || m == 'p') {
		if (newWaitingHour < 12) {
			if (newwaitingMinute > 59) {
				cout << "hhh";
				newWaitingHour = newWaitingHour + 1;
				newwaitingMinute = newwaitingMinute - 60;
				m = 'A';
			}
		}
		else {
			newWaitingHour = newWaitingHour - 12;
			if (newwaitingMinute > 59) {
				cout << "hhh1";
				newWaitingHour = newWaitingHour + 1;
				newwaitingMinute = newwaitingMinute - 60;
				m = 'A';
			}
		}
	}
	cout << "The Time after waiting period is\t" << newWaitingHour << ":" << newwaitingMinute << " " << m << "M" << endl;
}

void waitingTimeIn12HourFormat() {
	int currentHour, currentMinute, waitingHour, waitingMinute;
	char choice, m;
	do {
		cout << "Enter the current hour:\t";
		cin >> currentHour;
		cout << "Enter the current minute:\t";
		cin >> currentMinute;
		cout << "Enter A for am \n P for pm\t";
		cin >> m;
		cout << "The current time\t " << currentHour << ":" << currentMinute << " " << m << "M" << endl;
		cout << "Enter the waiting hour:\t";
		cin >> waitingHour;
		cout << "Enter the waiting minute:\t";
		cin >> waitingMinute;
		cout << "The waiting  time\t " << waitingHour << ":" << waitingMinute << endl;
		if (currentHour >= 0 && currentHour <= 12 && currentMinute >= 0 && currentMinute <= 59 && waitingMinute >= 0 && waitingMinute <= 59 && (m == 'A' || m == 'a' || m == 'P' || m == 'p')) {
			calculateWaitingTime1(currentHour, currentMinute, m, waitingHour, waitingMinute);
		}
		else {
			cout << "Please enter a valid time\n";
		}
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');

}

//Question4:What coins to give out for any amount of change from 1 cents to 99 cents.

void calculateCoins(int cents) {
	int quaters, dimes, extra;
	cout << cents << "cents can be given as" << endl;
	extra = cents % 25;
	quaters = cents / 25;
	if (quaters != 0) {
		cout << "Quaters\t" << quaters << "\t";
	}
	cents = extra;
	extra = cents % 10;
	dimes = cents / 10;
	if (dimes != 0) {
		cout << "Dimes\t" << dimes << "\t";
	}
	if (extra != 0) {
		cout << "Penny\t" << extra;
	}
	cout << endl;
}

void centsToCoins() {
	int cents;
	cout << "Enter the value of cents between 1 and 99\t";
	cin >> cents;
	if (cents >= 1 && cents <= 99) {
		calculateCoins(cents);
	}
	else {
		cout << "Please enter a valid number.\n";
	}
}

int main()
{
	//covertTo12HourFormat();

	//waitingTimeFromCurrentTime();

	//waitingTimeIn12HourFormat();

	centsToCoins();

	system("pause");
    return 0;
}

