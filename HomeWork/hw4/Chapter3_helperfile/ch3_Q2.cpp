/*/* Name: Foo Bar
   CIT 133 
   Assignment ...
   Due date: mm/dd/yyyy
   Time Taken : 3 hours
   
   Program Description: This program takes a person's unpaid credit card balance and calculates the interest owed.
   
   Input variables:
         netBalance- Balance on credit card
         payment- The payment amount made
         d1- The number of days on the billing cycle
         d2- The number of days payment was made before the billing cycle
         interestRate- The percentage of interest charged
        
             
   Output variables:
         netBalance- Balance on credit card
         payment- The payment amount made
         d1- The number of days on the billing cycle
         d2- The number of days payment was made before the billing cycle
         interestRate- The percentage of interest charged
         avgDailyBalance- Average daily balance on credit card
         interest- Interest charged
         */

//Preprocessor Directories
#include <iostream> 
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main(){ //Start main
      
      //Declare Variables
      double netBalance;
      double payment;
      int d1;
      int d2;
      int interestRate;
      double avgDailyBalance;
      double interest;
      
      
      cout << "Enter Net Balance amount : $ ";  //Prompts user to enter net balance
      cin >> netBalance;                        //Holds net balance in variable
      cout << "Enter Payment Amount : $ ";      //Prompts user to enter payment amount made
      cin >> payment;                           //Holds payment amount in variable
      cout << "Enter Days In Billing Cycle : "; //Prompts user to enter the days in billing cycle
      cin >> d1;                                //Holds days in variable
      cout << "Enter Number Of Days Payment Was Made Before The Billing Cycle : ";  //Prompts user to enter day payment was made before the billing cycle
      cin >> d2;                                //Holds days in variable
      cout << "Enter Monthly Interest Rate Percentage (must be an integer number): ";    //Prompts user to enter the monthly interest rate percentage
      cin >> interestRate;   //Holds interest rate in variable
      
      avgDailyBalance = (netBalance * d1 - payment * d2)/d1;   //Calculates the average daily balance
      interest = avgDailyBalance * interestRate/100;           //Calculates the interest charged
      
      cout << endl << endl;      //Blank spaces
      
      //Output Display
      cout << fixed;             //Sets a fixed precision
      cout << setprecision (2);  //Sets precision to 2
      cout << "Net Balance : $" << netBalance;    //Displays net balance
      cout << endl;
      cout << "Payment : $" << payment;           //Displays payment made
      cout << endl;
      cout << "Days In Billing Cycle : " << d1;   //Displays days in billing cycle
      cout << endl;
      cout << "Days Payment Was Made Before Billing Cycle : " << d2; //Displays days before billing cycle
      cout << endl;
      cout << "Monthly Interest Rate : " << interestRate << "%";     //Displays interest rate
      cout << endl;
      cout << "Average Daily Balance : $" << avgDailyBalance;        //Displays average daily balance
      cout << endl; 
      cout << "Interest : $" << interest;    //Displays interest rate charged
      cout << endl;
      cout << endl;
      
      ifstream myfile;       //File stream
      
      //NOTE: we used a text editor to create the file - we jsut want to read its data
      
      myfile.open("data.txt");      //Opens file
      
      //Declares Variables
      double net;
      double pay;
      int days1;
      int days2;
      int intRate;
      double avgBalance;
      double interest_;
      
      //Reads line from file to set to variables
      myfile >> net;
      myfile >> pay;
      myfile >> days1;
      myfile >> days2;
      myfile >> intRate;
      
      avgBalance = (net * days1 - pay * days2)/days1;  //Calculates average daily balance
      interest_ = avgBalance * intRate/100;            //Calculates interest charged
      
      myfile.close();        //Closes file
      
      //Output Display
      cout << "Net Balance : $" << net;   //Displays net balance
      cout << endl;
      cout << "Payment : $" << pay;       //Displays payment
      cout << endl;
      cout << "Days In Billing Cycle : " << days1;   //Displays days in billing cycle
      cout << endl;
      cout << "Days Payment Was Made Before Billing Cycle : " << days2; //Displays days payment was made before billing cycle
      cout << endl;
      cout << "Monthly Interest Rate : " << intRate << "%";   //Displays interest rate
      cout << endl;
      cout << "Average Daily Balance : $" << avgBalance;      //Displays average daily balance
      cout << endl; 
      cout << "Interest : $" << interest_;                    //Displays interest charged
      cout << endl; 

} //End main
