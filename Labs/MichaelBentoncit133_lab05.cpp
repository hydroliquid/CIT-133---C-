/*
	Name: Michael Benton
	Class: CIT 133
	Assaignment: Lab 5
	Date Assigned: 9/26/2018
    Due date: 9/26/2018
    Time Taken : 40mins
    
    1.) hello
    2.) true
    3.) 
    
    
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	// 3.) 

	double fTemp = 0.0;
	double cTemp = 0.0;
	
	// Ask for temp
	cout << "Enter the temputure: ";
	cin >> fTemp;
	cout << endl;
	
	if(fTemp >= -40 && fTemp <= 40)
	{
		cTemp = 5.0/9.0 * (fTemp - 32.0);
		cout << cTemp << endl;
	}
	else
	{
		cout << "ERROR - Tempeture not with in range.\n";
	}

	// 4.)

	char c = ' ';
	
	cout << "Enter a character: ";
	cin >> c;
	cout << "\n";
	
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout << "vowel";
			break;
		case 0:
		case 1:
			cout << "digit";
			break;
		default:
			cout << "other";
			break;
		
	}
	
	// 5.)
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	double deter = 0.0;
	double root1 = 0.0;
	double root2 = 0.0;
	
	cout << "The equation is: ax2 + bx + c = 0\n";
	cout << "Enter a coefficient for a: ";
	cin >> a;

	if(!a == 0)
	{
		cout << "Enter a coefficient for b: ";
		cin >> b;

		cout << "Enter a coefficient for c: ";
		cin >> c;
		
		deter = pow(b, 2) - (4.0 *(a*c));
		
		if(deter > 0)
		{
			root1 = (-b + sqrt(pow(b, 2) - (4.0 *(a*c)))) / (2.0 * a);
			root2 = (-b - sqrt(pow(b, 2) - (4.0 *(a*c)))) / (2.0 * a);
			
			cout << "root1 = " << root1 << "\n";
			cout << "root2 = " << root2 << "\n";
		}
		else
		{
			cout << "roots are complex!";
		}
		
	}
	else
	{
		cout << "ERROR - a can not equal 0";
	}
	
	
	
}
