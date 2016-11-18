/*

Justin Nason
Project 3
1D circle packing
COSC 3020


*/

#include <iostream>
#include<array>

using namespace std;


int main()
{

	double sum = 0.0000;
	int circles = 0;
	int radius;
	cout << "How many circles do want to have?\nEnter a number >=0 and <10\n";
	cin >> circles;
	int radiuses[10];
	if(circles == 0)
	{
		cout << "The size of the box is 0";
	}
	else
	{
		cout << "Please enter the radiuses of the each circle seperated by a space\n";
		for (int i = 0; i < circles; i++)
		{
			cin >> radius;
			radiuses[i] = radius;
		}

		if (circles == 1)
		{
			cout << "The size of the box is " << 2 * radiuses[1];
		}
		else
		{

			for (int i = 0; i < circles - 1; i++)
			{
				sum += sqrt(abs(pow(abs(radiuses[i] - radiuses[i + 1]), 2) - pow((radiuses[i] + radiuses[i + 1]), 2)));
			}
			sum += radiuses[0] + radiuses[circles - 1];
			cout << "The size of the box is " << sum << "\n";
		}

	}

	return 0;
}