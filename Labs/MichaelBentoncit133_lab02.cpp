/*
    Name: Michael Benton
    Class name: CIT 133
    Date Assigned: 9/5/2018
    Date Due: 9/5/2018
    
    a) Calculating quarters, dimes, and nickles into pennies.
    * Input-
    * nickels - number of nickles
    * dimes - number of dimes
    * quarters - number of quarters
    * 
    * Processing-
    * pennies = quarters * 25
    * pennies = nickels * 5
    * pennies = dimes * 10
    * totalValue = pennies
    * 
    * Ouput-
    * totalValue - total number of pennies
    * 
        b) Calculating the force between to bodies of masses.
        * Constants -
        * k - The gravitational constant 6.673*10e-11
        * 
        * Input -
        * m1 - first body of mass
        * m2 - second body of mass
        * dis - the distance between mass1 and mass2
        * 
        * Processing - 
        * F = (k * ((m1*m2) / (dis*dis )))
        * 
        * Output -
        * F - force calulated
        * 
            c) Input - 
            * name - name of employee
            * gender - gender of employee
            * employeeID - Employee ID number
            * hours - Hours employee has worked
            * payRate - Dollars an hour 
            * 
            * Processing -
            * totalPay = hours * payRate;
            * 
            *  Output -
            * totalPay - Total pay for hours worked.
            *   
    * Time taken to complete this program: 75 mins
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // establish variables
    int pennies;
    int nickels;
    int dimes;
    int quarters;
    int totalValue;
    
    // Ask user for input
    cout << "Please enter the number of quarters: ";
    cin >> quarters;
    cout << endl;
    
    pennies = quarters * 25; // Calulating amount of pennies for quarters
    
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << endl;
    
    pennies += dimes * 10; // Calulating amount of pennies for quarters
    
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << endl;
    
    pennies += nickels * 5; // Calulating amount of pennies for quarters
    totalValue = pennies;
    
    // Print total value of pennies
    cout << "The total number of pennies is " << totalValue << endl;
    
    
    // Establish variables
    const double k = 6.673e-11; // constant for gravitational constant
    double dis;
    double m1;
    double m2;
    double F;
    
    // Ask user for input
    cout << "Please enter the distance between two "
         << "masses in meters, do not enter zero: ";
    cin >> dis;
    
    cout << "Please enter the mass of object 1 in kilograms: ";
    cin >> m1;
    
    cout << "Please enter the mass of object 2 in kilograms: ";
    cin >> m2;
    
    F = (k * ((m1*m2) / (dis*dis ))); // Calculation for force
    
    //Print total force
    cout << "The total force according to Newton's law is " 
         << F << endl;
    
    
    // Establish variables
    string name;
    string gender;
    int employeeID;
    double hours;
    double payRate;
    double totalPay;
    
    // Ask user for input   
    cout << "Please enter your name: ";
    cin >> name;
    
    cout << "Please enter your gender: ";
    cin >> gender;
    
    cout << "Please enter your 4-digit employee ID: ";
    cin >> employeeID;
    
    cout << "Please enter your hours worked: ";
    cin >> hours;
    
    cout << "Please enter your pay rate: ";
    cin >> payRate;
    
    totalPay = hours * payRate; // Calculating total pay
    
    //print Variables and total pay.
    cout << "Name: " << name << "\n";
    cout << "Gender: " << gender << "\n";
    cout << "Employee ID: " << employeeID << "\n";
    cout << "Total Pay: $" << totalPay;
    
    return 0;
}  
  
