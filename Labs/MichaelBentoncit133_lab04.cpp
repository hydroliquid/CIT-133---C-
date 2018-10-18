/*
	Name: Michael Benton
    CIT 133 
    Assignment: Lab 4
    Date Assigned: 9/19/2018
    Due date: 9/19/2018
    Time Taken : 30mins
   
    1. #include <iomanip>
    2. #include <iomanip>
    3. 39.060000
   	  16
	4. a) age = 23 , name = Foo Bar
	   b) age = 23 , name =  

*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	// 5)
	string fullName = " ";
	int idNum = 0;
	char gender = ' ';
	double salary = 0.0;
	
	cout << "Please enter your full name: ";
	getline(cin, fullName);
	cout << "Enter your ID number: ";
	cin >> idNum;
	cout << "Enter either M or F for your gender: ";
	cin >> gender;
	cout << "Enter your salary: ";
	cin >> salary;
	
	cout << fixed << setprecision(1);
	cout << setw(52) << setfill('*') << "Data" << endl;
	cout << " " << endl;
	cout << "@" << fullName << endl;
	cout << idNum << endl;
	cout << gender << endl;
	cout << "$" << salary << endl;
	cout << left << setfill('*') << setw(52) << "End Data" << endl;
	
	// 6)
	string fileName;
	
	cout << "Enter a name for the file to write your info: ";
	cin >> fileName;
	
	ofstream outData;
	outData.open(fileName.c_str());
	
	outData << fixed << setprecision(1);
	outData << setw(52) << setfill('*') << "Data" << endl;
	outData << " " << endl;
	outData << "@" << fullName << endl;
	outData << idNum << endl;
	outData << gender << endl;
	outData << "$" << salary << endl;
	outData << left << setfill('*') << setw(52) << "End Data";
	
	
	outData.close();
	
	
	
}
