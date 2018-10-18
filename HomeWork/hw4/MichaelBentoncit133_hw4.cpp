/*
	Name: Michael Benton
    CIT 133 
    Assignment: HW4
    Due date: 9/20/2018
    Time Taken : 2 hours
   
    This is a program to create a personalized business card.
    
    Input variables:
	name - users name
	title - users title
	depart - users department
	officePhone - office phone number
	mobilePhone - users mobile phone number
	email - users email
	mailCode - office mail code
	magic - users magic number
	outData - ofstream output variable
             
    Output variables:
	name - users name
	title - users title
	depart - users department
	officePhone - office phone number
	mobilePhone - users mobile phone number
	email - users email
	mailCode - office mail code
	magic - users magic number
	
	Psuedo code - 
     1. Start
     2. Output "Enter your name: "
     3. getline(cin, name)
     4. Output "Enter your title: "
     5. getline(cin, title)
     6. Output "Enter your department: "
     7. getline(cin, depart)
     8. Output "Enter your office phone number: "
     9. get officePhone
     10. Output "Enter your mobile phone number: "
     11. Get mobilePhone
     12. Output "Enter your email: "
     13. Get email
     14. Output "Enter your office mail code: "
     15. Get mailCode
     16. Output "Enter your magic number: "
     17. Get magic
     18. create businesscard.txt file/ open the file
     19. Write "Here is your official business card:"
     20. Write cout << setw(49) << "*" << setfill(-) << "*" << endl
     21. Write "|"
     22. Write "| " << name << endl
     23. Write "| " << title << endl
     24. Write "| " << depart << endl
     25. set precision 0
     26. Write "| Office Phone: " << officePhone << endl 
     27. Write "| Mobile Phone: " << mobilePhone << endl
     28. Write "| " << email << endl
     29. Write "| Mail code: << mailCode << endl
     30. set precision 0
	 31. Write "| Magic number: " << magic << endl
	 32. Write cout << setw(49) << "*" << setfill(-) << "*" << endl
	 33. Close the ofstream file
     
     Time taken to complete this program: 0 hr 20- mins

*/

#include <iostream> // use cout, cin
#include <string> // use strings
#include <iomanip> // use setprecision(), fixed, setw(), setfill()
#include <fstream> // Ability to write to files

using namespace std; // use cout, cin without std::

int main()
{
	// Initialize variables
	string name = " ";
	string title = " ";
	string depart = " ";
	string officePhone = " ";
	string mobilePhone = " ";
	string email = " ";
	char mailCode = 0;
	double magic = 0.0;
	
	// Declare fstream variable
	ofstream outData;
	
	// Gather data
	cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your title: ";
    getline(cin, title);
    cout << "Enter your department: ";
    getline(cin, depart);
    cout << "Enter your office phone number: ";
    getline(cin, officePhone);
    cout << "Enter your mobile phone number: ";
    getline(cin, mobilePhone);
    cout << "Enter your email: ";
    cin >> email;
    cout << "Enter your office mail code: ";
    cin >> mailCode;
    cout << "Enter your magic number: ";
    cin >> magic;
    
    //Open ofstream
    outData.open("businesscard.txt");
    
    // Write business card
    outData << "Here is your official business card:" << endl;
    outData << "*" << setfill('-') << setw(49) << "*" << endl;
    outData << "|" << endl;
    outData << "| " << name << endl;
    outData << "| " << title << endl;
    outData << "| " << depart << endl;
    outData << "| Office Phone: " << officePhone << endl;
    outData << "| Mobile Phone: " << mobilePhone << endl;
    outData << "| " << email << endl;
    outData << "| Mail code: " << mailCode << endl;
    outData << fixed << setprecision(2);
	outData << "| Magic number: " << magic << endl;
	outData << "*" << setfill('-') << setw(49) << "*" << endl;
	
	// Close ofstream
	outData.close();
	
	return 0;
}
