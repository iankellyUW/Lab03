// Lab03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

short shortSum() {
	short sum = 1;
	short firstSum = 0;
	short lastSum = 0;
	short n = 1;
	for (short i = 1; i <= n; i++) {
		firstSum = sum;
		sum += i;
		lastSum = sum;
		if (lastSum < firstSum) {
			cout << "i: " << i << ", n: " << n << ", sum: " << sum << endl;
			cout << "overflow." << endl;
		}
		else n++;
	}
	return sum;
}

long longSum() {
	long sum = 1;
	long firstSum = 0;
	long lastSum = 0;
	long n = 1;
	for (long i = 1; i <= n; i++) {
		firstSum = sum;
		sum += i;
		lastSum = sum;
		if (lastSum < firstSum) {
			cout << "i: " << i << ", n: " << n << ", sum: " << sum << endl;
			cout << "overflow." << endl;
		}
		else n++;
	}
	return sum;
}

float productFloatFactorial() {
	float product = 1;
	float firstProduct = 0;
	float lastProduct = 0;
	long n = 1;
	for (long i = 1; i <= n; i++) {
		firstProduct = product;
		product += product * i;
		lastProduct = product;
		if (lastProduct >= INFINITY) {
			cout << "i: " << i << ", n: " << n << ", product: " << product << endl;
			cout << "overflow." << endl;
		}
		else n++;
	}
	return product;
}

double productDoubleFactorial() {
	double product = 1;
	double firstProduct = 0;
	double lastProduct = 0;
	long n = 1;
	for (long i = 1; i <= n; i++) {
		firstProduct = product;
		product += product * i;
		lastProduct = product;
		if (lastProduct >= INFINITY) {
			cout << "i: " << i << ", n: " << n << ", product: " << product << endl;
			cout << "overflow." << endl;
		}
		else n++;
	}
	return product;
}

float sumOneOverN() {
	float sum = 0;
	float lastSum = 0;
	int n = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		sum += (1.0 / n);
		lastSum = sum;
		
	}
	cout << sum - 1 << endl;
	return sum - 1;
}

double sumOneDoubleOverN() {
	double sum = 0;
	double lastSum = 0;
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += ((double)1.0 / (double)n);
		
	}
	cout << sum - 1.0 << endl;
	return sum - 1.0;
}

float floatPuzzle() {
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	return 0;
}

double doublePuzzle() {
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	return 0;
}

int main()
{
	shortSum();
	longSum();
	productFloatFactorial();
	productDoubleFactorial();
	sumOneOverN();
	sumOneDoubleOverN();
	floatPuzzle();
	doublePuzzle();
	return 0;
}
