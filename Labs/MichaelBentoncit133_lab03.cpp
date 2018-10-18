/*
    Name: Michael Benton
    Class name: CIT 133
    Date Assigned: 9/12/2018
    Date Due: 9/12/2018
    
    This program ask for the users name and an integer for cents then calculates 
    the cents into half dollars to pennies in decending order.
    
    input- 
    name - user name
    cents - amount of money in cents
    halfDollars - number of half dollars
    quarters - number of quarters
    dimes - number of dimes
    nickels - number of nickels
    pennies - number of pennies
    
    output -
    name - user name
    cents - amount of money in cents
    halfDollars - number of half dollars
    quarters - number of quarters
    dimes - number of dimes
    nickels - number of nickels
    pennies - number of pennies
    
    
    * Time taken to complete this program: 25mins
*/

#include <iostream> // cin, cout
#include <string> // string

using namespace std; // no std::

int main()
{
	// declaring variables
	string name;
    int cents;
    int halfDollars;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    
    // ask user for name, and amount of cents
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Enter the amount of money in cents: ";
    cin >> cents;
    
    // calculate cent into the coins using temp variables
    halfDollars = cents / 50;
    int temp = cents % 50;
    quarters = temp / 25;
    int temp2 = temp % 25;
    dimes = temp2 / 10;
    int temp3 = temp2 % 10;
    nickels = temp3 / 5;
    int temp4 = temp3 % 5;
    pennies = temp4 / 1;
    
    // displaying halfDollars, quearters, dimes, nickels, pennies, name
    cout << "Numer of half dollars = " << halfDollars << "\n";
    cout << "Numer of half dollars = " << quarters << "\n";
    cout << "Numer of half dollars = " << dimes << "\n";
    cout << "Numer of half dollars = " << nickels << "\n";
    cout << "Numer of half dollars = " << pennies << "\n";
    cout << "Your name is " << name;
    
}


