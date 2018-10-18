/*	
	Name: Michael Benton
    CIT 133 
    Assignment: HW6
    Date assaigned: 10/8/2018
    Due date: 10/18/2018
    Time Taken : 2 hours
    
    Psudo code
    input - 
	taxRate - 8% tax constant
	purFileCheck - file name to check for
	purFile - file to get data from
	recieptFile - FIle to write to
	inData -ifstream 
	outData - ofstream 
	item - name of item
	quanity - quanity of item
	itemPrice - price of item
	itemTotal - total for each set of items
	subTotal - total before tax
	taxTotal - tax total
	itemCount - item counter
	
	Start
	Get data input filename
	check for correct filename
	Open input file
	get output file name
	Open file to output too
	Output << "Item" << setw(24) << "Price"
	Output << "----------------------------------"
	Write to file
	Output << left << setw(24) << "Item" <<setw(6) << "Price"
	Output << "----------------------------------" 
	Output << fixed << setprecision(2) << showpoint
	start loop while(inData >> item >> quanity >> itemPrice)
	Output << item << " -- " << quanity
	Output << " @ $" << itemPrice << ":"
	Calculate Item Total
	itemTotal = itemPrice * (double)quanity
	Output << fixed << setprecision(2)	
	Output << right << setw(5) << "$" << itemTotal 
	Add to item count, add to subtotal
	end loop
	Output << "----------------------------------" 
	Output << "Subtotal:" << setw(16) << "$" << subTotal 
	taxTotal = subTotal * taxRate
	Output << "Tax:" << setw(21) << "$" << taxTotal 
	Output << "----------------------------------" 
	Output << "Total:" << setw(19) << "$" 
			<< (subTotal + taxTotal) 
	Output << "Number of Items: " << itemCount 
	Cloce files
	else output "ERROR - file not found." 
		
*/
#include <iostream> // cin, cout
#include <fstream> // ifstream, ofstream
#include <iomanip> // use setprecision(), fixed, setw(), setfill()

using namespace std; // Not use std:: 

int main()
{
	// Initialize variables
	const double taxRate = 0.08;
	string purFileCheck = "purchases.txt";
	string purFile = " ";
	string recieptFile = " ";
	
	ifstream inData;
	ofstream outData;
	
	string item = " ";
	int quanity = 0;
	double itemPrice = 0.0;
	double itemTotal = 0.0;
	double subTotal = 0.0;
	double taxTotal = 0.0;
	
	int itemCount = 0;
	// Get purchases filename
	cout << "Enter the name of the input file: ";
	cin >> purFile;
	// Check purchases filename
	if (purFile == purFileCheck)
	{
		// Open purchases file
		inData.open(purFile.c_str());
		// Get output file name
		cout << "ENter the name of the output file: ";
		cin >> recieptFile;
		// Open write file
		outData.open(recieptFile.c_str());
		// Write to file
		outData << left << setw(24) << "Item" <<setw(6) << "Price" << endl;
		outData << "----------------------------------" << endl;
		outData << fixed << setprecision(2) << showpoint;
		// Loop to find to print data
		while(inData >> item >> quanity >> itemPrice)
		{
			outData << item << " -- " << quanity;
			outData << " @ $" << itemPrice << ":";
			// Calculate Item Total
			itemTotal = itemPrice * (double)quanity;
			outData << fixed << setprecision(2);		
			outData << right << setw(5) << "$" << itemTotal << endl;
			// Add to item count, add to subtotal
			itemCount += 1;
			subTotal += itemTotal;
		}
		// Cont. Output
		outData << "----------------------------------" << endl;
		outData << "Subtotal:" << setw(16) << "$" << subTotal << endl;
		taxTotal = subTotal * taxRate;
		outData << "Tax:" << setw(21) << "$" << taxTotal << endl;
		outData << "----------------------------------" << endl;
		outData << "Total:" << setw(19) << "$" 
				<< (subTotal + taxTotal) << endl;
		outData << "Number of Items: " << itemCount << endl;
		// Cloce files
		inData.close();
		outData.close();
		
	}
	else
	{
		// Display Error
		cout << "ERROR - file not found." << endl;
	}
	
	return 0;
	
	
	
	
}
