#include<iostream>
#include<math.h>
using namespace std;

void selectscreen(void);

double meanMarks();
double moremeanMarks();
int findMax();
int betterfindMax();

int main()
{
	int choice;
	selectscreen();
	cin >> choice;
	cout << endl;
	switch (choice)
	{
	case 1:
		cout << "\nyou have selected: meanMarks() function\n\n";
		meanMarks();
		break;
	case 2:
		cout << "\nyou have selected: moremeanMarks() function\n\n";
		moremeanMarks();
		break;
	case 3:
		cout << "\nyou have selected: findMax() function\n\n";
		findMax();
		break;
	case 4:
		cout << "you have selected: betterfindMax() function\n\n";
		betterfindMax();
		break;
	default:
		cout << "YOUR MOTHER\n";
	}
}


void selectscreen(void)
{
	printf("* choose your function *\n");
	printf("for meanMarks of students using 'for loop', press uno \n");
	printf("for meanMarks of students using 'while loop', press ni \n");
	printf("for findMax, press san\n");
	printf("for the BETTER findMax, press quatro\n");
	//more choices

	printf("\nyour choice ma'am: ");
}

/*I LOVE SEE PlUSS PlUSS*/

double meanMarks()
{
	double total = 0, mean = 0;
	int marks[] = { 3, 8, 4, 9, 5, 9, 4, 3, 1, 7 }; //store marks

	for (int i = 0; i < 10; i++) // for loop to write students marks to 'total' variable
	{
		total += marks[i]; // add all our marks into the variable known as 'total'
		cout << "the total is now: " << total << endl;
	}
	mean = total / 10.0;
	cout << "\nthe average marks is: " << mean << endl;
	return mean;
}

double moremeanMarks()
// we shall now use WHILE LOOPS
{
	double total = 0, mean = 0;
	int i = 0, marks[] = { 3, 8, 4, 9, 5, 9, 4, 3, 1, 7 }; //store marks

	while (i < 10)
	{
		total += marks[i];
		i++;
	}
	mean = total / 10.0;
	cout << "\nthe average marks is: " << mean << endl;
	return mean;
}

int findMax()
{
	int arr[3], max; //cry im not good enough to use dynamic arrays :pensive:
	
	for (int i = 0; i < 3; i++)
	{
		cout << "\nenter the 3 sacred numbah: ";
		cin >> arr[i]; //input da numbahs
	}
	max = arr[0]; //we shall declare the first number as the maximus for now
	for (int i = 0; i < 3 /*you*/; i++)
	{
		//for loop to find out the TRUE maximus number
		if (arr[i] > max)
			max = arr[i];
			cout << "\nthe biggest number is now: " << max;
	}
	cout << "\n\nthe MAXIMUS number is: " << max << endl;
	return 0;
}

int betterfindMax()
{
	int max, min, arr[20] = { 56, 32, 62, 36, 81, 14, 26, 34, 24, 92, 66, 97, 39, 38, 10, 93, 3, 5, 51, 75 };// i like user input as much as the next guy but we can't today :pensive:
	max = min = arr[0];

	for (int i = 0; i < 20; i++)
	{
		cout << "\nnow comparing numbah " << arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
			cout << "\nthe biggest is now: " << max << endl;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			cout << "\nthe smallest is now: " << min << endl;
		}
		else
		{
			cout << "\nno change." << endl;
		}
	}
	cout << "\n\nthe MAXIMUS number is: " << max;
	cout << "\n AND THE minimus NUMBER IS: " << min;
	return 0;
}