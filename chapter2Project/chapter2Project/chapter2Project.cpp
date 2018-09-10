// chapter2Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

//question 2:Retroactive Pay

void retroactivePay() {
	const double payIncrease = 7.6;
	double oldAnnualSalary, newAnnualSalary, newMonthlySalary, dueRetroacivePay, monthlyPayIncrease, oldMonthlySalary;
	char choice;

	do {
		cout << "Enter the Previous Annual Income\t";
		cin >> oldAnnualSalary;
		dueRetroacivePay = (oldAnnualSalary*7.6) / 100;
		cout << "Amount of retroactive pay due \t" << dueRetroacivePay << "\n";
		newAnnualSalary = oldAnnualSalary + dueRetroacivePay;
		cout << "The new Annual Salary\t" << newAnnualSalary << "\n";
		monthlyPayIncrease = dueRetroacivePay / 6;
		cout << "MonthlypayIncrease\t" << monthlyPayIncrease << "\n";
		oldMonthlySalary = oldAnnualSalary / 12;
		cout << "The old monthly salary\t" << oldMonthlySalary << "\n";
		newMonthlySalary = oldMonthlySalary + monthlyPayIncrease;
		cout << "The new monthly salary\t" << newMonthlySalary << "\n";
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
}

//Question 3:retroactive pay for any number of months

void retroactivePayForAnyMonths() {
	const double payIncrease = 7.6;
	double oldAnnualSalary, newAnnualSalary, newMonthlySalary, dueRetroacivePay, monthlyPayIncrease, oldMonthlySalary;
	int months;
	char choice;

	do {
		cout << "Enter the Previous Annual Income\t";
		cin >> oldAnnualSalary;
		cout << "Enter the number of months for retroactive pay \t";
		cin >> months;
		dueRetroacivePay = (oldAnnualSalary*7.6) / 100;
		cout << "Amount of retroactive pay due \t" << dueRetroacivePay << "\n";
		newAnnualSalary = oldAnnualSalary + dueRetroacivePay;
		cout << "The new Annual Salary\t" << newAnnualSalary << "\n";
		monthlyPayIncrease = dueRetroacivePay / months;
		cout << "MonthlypayIncrease\t" << monthlyPayIncrease << "\n";
		oldMonthlySalary = oldAnnualSalary / 12;
		cout << "The old monthly salary\t" << oldMonthlySalary << "\n";
		newMonthlySalary = oldMonthlySalary + monthlyPayIncrease;
		cout << "The new monthly salary\t" << newMonthlySalary << "\n";
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
}

//Question 4: Discount installment loan face value calculation

void calculateLoanFaceValue() {
	char choice;
	double amountNeeded, interestRate, noOfMonths, faceValue, monthlyPayment, duration;
	do {
		cout << "Enter the amount needed as loan\t";
		cin >> amountNeeded;
		cout << "Enter the Interest Rate \t";
		cin >> interestRate;
		interestRate = interestRate / 100;
		cout << "Enter the duration of the loan in months\t";
		cin >> noOfMonths;
		duration = noOfMonths / 12;
		faceValue = amountNeeded / (1 - (interestRate * duration));
		cout << "The face value of loan is \t" << faceValue << "\n";
		monthlyPayment = faceValue / noOfMonths;
		cout << "Monthly Payment is \t" << monthlyPayment << "\n";
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
}

//Question 5:Fire law regulation for meeting room regarding the maximum room capacity

void maxRoomCapacity() {
	char choice;
	int maxRoomCapacity, noOfPeopleAttending, additionalPeople, excludPeople;
	do {
		cout << "Enter the maximum room capacity of the meeting room\t";
		cin >> maxRoomCapacity;
		cout << "Enter the number of people attending the meeting\t";
		cin >> noOfPeopleAttending;
		if (noOfPeopleAttending <= maxRoomCapacity) {
			cout << "It is legal to hold the meeting in this meeting room\n";
			additionalPeople = maxRoomCapacity - noOfPeopleAttending;
			if (additionalPeople > 0) {
				cout << additionalPeople << " more people can legally attend this meeting\n";
			}
			else {
				cout << "No additional room for more people\n ";
			}
		}
		else {
			cout << "The meeting cannot be held as planned due to fire regulation\n";
			excludPeople = noOfPeopleAttending - maxRoomCapacity;
			cout << excludPeople << " people must be excluded in order to meet the fire regulation\n";
		}
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
}

//Question 9:Sum of 10 whole numbers

void sumOfWholeNumbers() {
	int number[20], i, sumPositive = 0, sumNegative = 0, sum = 0;
	for (i = 0; i < 10; i++) {
		cout << "enter the elements (whole Numbers):\t";
		cin >> number[i];
	}
	cout << "The numbers are \t";
	for (i = 0; i < 10; i++) {
		cout << number[i] << "  ";
		if (number[i] > 0) {
			sumPositive = sumPositive + number[i];
		}
		else if (number[i] < 0) {
			sumNegative = sumNegative + number[i];
		}
		sum = sum + number[i];
	}
	cout << endl;
	cout << "Sum of all postive numbers :\t" << sumPositive << endl;
	cout << "Sum of all negative numbers :\t" << sumNegative << endl;
	cout << "Sum of all numbers :\t" << sum << endl;
}

int main()
{
	//retroactivePay();

	//retroactivePayForAnyMonths();

	//calculateLoanFaceValue();

	//maxRoomCapacity();

	sumOfWholeNumbers();

	system("pause");
    return 0;
}

