/*
	Name: Michael Benton
    CIT 133 
    Assignment: Lab 7
    Date assaigned: 10/17/2018
    Due date: 10/17/2018
*/

#include <iostream> // use cout, cin
#include <string> // use strings
#include <iomanip> // use setprecision(), fixed, setw(), setfill()
#include <fstream> // Ability to write to files

using namespace std;
// 1.)
int getInt(double, string);
// 2.)
void mydata(string, string, char);
// 3.)
void readFile();
// 4.)
double getTotal(double, double);
// 5.)
double getProduct(double, double);

// 6.)
int main()
{
	// 3.)
	readFile();
	
	// 4.)
	cout << getTotal(2.2, 3.4) << endl;
	
	// 5.)
	cout << getProduct(2, 10) << endl;
	
	return 0;
}
// 3.)
void readFile()
{
	string fileName = " ";
	ifstream inData;
	char s = ' ';
	int count = 0;
	int vowelCnt = 0;
	
	cout << "Enter the name of the file: ";
	cin >> fileName;
	
	inData.open(fileName.c_str());
	
	if(!inData)
	{
		cout << "ERROR - File does not exist" << endl;
	}
	else 
	{
		
		while(inData>>s)
		{
			count += 1;
			switch (s)
			{
				case 'a': case 'A': case 'e': case 'E': case 'i': case 'I':
				case 'o': case 'O': case 'u': case 'U': case 'y': case 'Y':
				{
					vowelCnt +=1;
					cout << s << " vowel " << endl;
					break;
				}	
				default:
				{
					cout << s << endl;
				}
					break;
			}		 
		}
		cout << "vowel percentage = "
			 << ((double)vowelCnt / count * 100)
			 << "% " << endl;
	}
	
}
// 4.)
double getTotal(double x, double y)
{
	double total = x + y;
	
	return total;
}
// 5.)
double getProduct(double x, double y)
{
	double total = x * y;
	
	return total;
}









