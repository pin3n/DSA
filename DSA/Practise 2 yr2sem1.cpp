// Practise 2 yr2sem1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

double Wmean();
double twodeeArr();

int main()
{
	cout << "choose the function.\n\n answer for qn: ";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case (8):
	{
		Wmean();
		break;
	}
	case(9):
	{
		twodeeArr();
		break;
	}
	default:
	{
		cout << "\nyou're such a queef!!!\n\n";
		break;
	}
	}
}

double Wmean()
{
	double marks[] = { 100.0, 89.0, 45.0, 88.0 };
	double weight1[] = { 0.1, 0.2, 0.3, 0.4 };
	double weight2[] = { 0.2, 0.2, 0.4, 0.2 };
	double Wmean = 0; // declare them variables

	double* ptrA = &marks[0]; //assign pointer datatypes
	double* ptrB;

	cout << "\nwhich weightage are we using?\n\n" << "weightage: ";

	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		ptrB = &weight1[0];
		for (int i = 0; i < 4; i++)
		{
			Wmean += *ptrA * *ptrB;
			ptrA++;
			ptrB++;
			cout << "\nWmean is now: " << Wmean;
		}
		cout << "\n\n\nthe weighted average is: " << Wmean;
		break;
	}
	case 2:
	{
		ptrB = &weight2[0];
		for (int i = 0; i < 4; i++)
		{
			cout << "\nptrA is pointing to: " << *ptrA << " at address: " << ptrA;
			Wmean += *ptrA++ * *ptrB++;

			cout << "\n\nWmean is now: " << Wmean;
		}
		cout << "\n\n\nthe weighted average is: " << Wmean;
		break;
	}
	}
	return 0;
}

double twodeeArr()
{
	double* point;
	double twodeeArr[3][5] =
	{
		{1.69,2.69,3.69,4.04,5},
		{6.9,7.27,8.69,9.60,10},
		{11,12.93,13.420,14,15.987}
	};
	point = &twodeeArr[0][0];

	cout << "\nlook! i made a 2DEE array!\n\n";

	for (int i = 0; i < 3; i++)
	{
		cout << "{ ";
		for (int i = 0; i < 5; i++)
		{
			cout << *point++ << ", ";
		}
		cout << "} \n";
	}


	return 0;
}

