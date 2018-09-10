// chapter4Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

//Question 1: Annual after tax cost for a new house for first year of ownership

double calculateAnnualMortgageCost(double initialLoanBalance) {
	double principal, interest, annualMortgageCost;
	principal = (initialLoanBalance * 3) / 100;
	interest = (initialLoanBalance * 6) / 100;
	annualMortgageCost = principal + interest;
	cout << "annualMortgageCost\t" << annualMortgageCost << endl;
	return annualMortgageCost;
}

double calculateTaxSavings(double initialLoanBalance) {
	double taxSavings, interest;
	interest = (initialLoanBalance * 6) / 100;
	taxSavings = (interest * 35) / 100;
	cout << "taxSavings\t" << taxSavings << endl;
	return taxSavings;

}

void afterTaxCostOfNewHouse() {
	double annualAfterTaxCost, annualMortgageCost, taxSavings, priceOfHouse, downPayment, initialLoanBalance;
	char choice;
	do {
		cout << "Enter the price of the house\t$";
		cin >> priceOfHouse;
		cout << "Enter the Down payment\t$";
		cin >> downPayment;
		initialLoanBalance = priceOfHouse - downPayment;
		cout << "initialLoanBalance\t" << initialLoanBalance << endl;
		annualMortgageCost = calculateAnnualMortgageCost(initialLoanBalance);
		taxSavings = calculateTaxSavings(initialLoanBalance);
		annualAfterTaxCost = annualMortgageCost - taxSavings;
		cout << "The annual after-tax cost is \t$" << annualAfterTaxCost << endl;
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
}

//Question 2: Clothing size:hatsize,jacketsize,waist

double calculateHatSize(double height, double weight) {
	double hatSizeResult;
	hatSizeResult = (weight / height)*2.9;
	return hatSizeResult;
}

double calculateJacketSize(double height, double weight, int age) {
	double jacketSizeResult;
	int count;
	jacketSizeResult = (height*weight) / 288;
	count = age / 10;
	if (count > 3) {
		for (count; count > 3; count--) {

			jacketSizeResult = jacketSizeResult + 0.125;
		}

	}
	return jacketSizeResult;
}

double calculateWaist(double height, double weight, int age) {
	double waistResult;
	int temp;
	waistResult = weight / 7.5;
	if (age > 28) {
		temp = age - 28;
		for (temp; temp > 0; temp--) {
			if (temp % 2 == 0) {
				waistResult = waistResult + 0.10;
			}
		}

	}
	return waistResult;
}

void clothingSize() {
	double height, weight, hatSize, jacketSize, waist;
	int age;
	char choice;
	do {
		cout << "Enter the weight in pounds \n";
		cin >> height;
		cout << "Enter the height in inches \n";
		cin >> weight;
		cout << "Enter the age \n";
		cin >> age;
		hatSize = calculateHatSize(height, weight);
		cout << "The hat size is\t" << hatSize << endl;
		jacketSize = calculateJacketSize(height, weight, age);
		cout << "jacket size\t" << jacketSize << endl;
		waist = calculateWaist(height, weight, age);
		cout << "waist is\t" << waist << endl;
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
}


//question 3: modify the clothing size question ,also calculate the jacket size and waist size after 10 years.

double calculateHatSize1(double height, double weight) {
	double hatSizeResult;
	hatSizeResult = (weight / height)*2.9;
	return hatSizeResult;
}

double calculateJacketSize1(double height, double weight, int age) {
	double jacketSizeResult;
	int count;
	jacketSizeResult = (height*weight) / 288;
	count = age / 10;
	if (count > 3) {
		for (count; count > 3; count--) {

			jacketSizeResult = jacketSizeResult + 0.125;
		}

	}
	return jacketSizeResult;
}

double calculateWaist1(double height, double weight, int age) {
	double waistResult;
	int temp;
	waistResult = weight / 7.5;
	if (age > 28) {
		temp = age - 28;
		for (temp; temp > 0; temp--) {
			if (temp % 2 == 0) {
				waistResult = waistResult + 0.10;
			}
		}

	}
	return waistResult;
}

void extraClothSize() {
	double height, weight, hatSize, jacketSize, waist, jacketSizeNew, waistNew;
	int age, newAge;
	char choice;
	do {
		cout << "Enter the weight in pounds \n";
		cin >> height;
		cout << "Enter the height in inches \n";
		cin >> weight;
		cout << "Enter the age \n";
		cin >> age;
		hatSize = calculateHatSize1(height, weight);
		cout << "The hat size is\t" << hatSize << endl;
		jacketSize = calculateJacketSize1(height, weight, age);
		cout << "jacket size\t" << jacketSize << endl;
		waist = calculateWaist1(height, weight, age);
		cout << "waist is\t" << waist << endl;
		newAge = age + 10;
		jacketSizeNew = calculateJacketSize1(height, weight, newAge);
		cout << "jacket size after 10 years\t" << jacketSizeNew << endl;
		waistNew = calculateWaist1(height, weight, newAge);
		cout << "waist after 10 years\t" << waistNew << endl;
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');

}

//Question 6: vending machine of deep fried twinkies.

double totalCostResult = 0.0;

double calculateTotalCost(double coin) {
	totalCostResult = totalCostResult + coin;
	return totalCostResult;

}

void twinkiesVendingMachine() {
	double coin, totalCost = 0.0, change;
	do {
		cout << "Pay $3.5 for deep fried twinkies\n";
		cout << "1 for 1 dollar\n";
		cout << "0.25 for quarter\n";
		cout << "0.10 for dime\n";
		cout << "0.5 for nickel\n";
		cout << "Enter the coin :\t$";
		cin >> coin;
		if (coin == 1 || coin == .25 || coin == .1 || coin == .05) {
			totalCost = calculateTotalCost(coin);
			change = 3.5 - totalCost;
			if (change>0) {
				cout << "The Remaining coin that need to be inserted\t" << change << endl;
			}
		}
		else {
			cout << "you entered an invalid coin\n";
		}

	} while (totalCost <3.5);
	cout << "Enjoy your deep-fried twinkies!!!" << endl;
	cout << "You have entered $" << totalCost << endl;
	if (totalCost != 3.5) {
		change = totalCost - 3.5;
		cout << "Here is your $" << change << " change ...!!!!\n";
	}
}

int main()
{

	//afterTaxCostOfNewHouse();

	//clothingSize();

	//extraClothSize();

	//twinkiesVendingMachine();
	system("pause");
    return 0;
}

