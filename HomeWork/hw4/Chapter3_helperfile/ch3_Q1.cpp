/* Name: Foo Bar
   CIT 133 
   Assignment ...
   Due date: mm/dd/yyyy
   Time Taken : 3 hours
   
   
   Program Description : This program takes an employees number, name, hours worked,
   hourly pay and calculates their pay.
   
   Input:
         emp_id - Employee number
         fname - Employee's first name
         lname - Employee's last name
         reg_hours - Employee's regular hours worked
         overtime - Employee's overtime hours worked
         hourly_pay - Employee's hourly pay rate
         file - Name of file
    
   Output:
         emp_id - Employee's number
         fname - Employee's first name
         lname - Employee's last name
         reg_hours - Employee's regular hours worked
         overtime - Employee's overtime hours worked
         hourly_pay - Employee's hourly pay rate
         gross_pay - Employee's gross pay
         net_pay - Employee's net pay
*/

//Preprocessor  Directories
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//Start main function
int main(){
    //Declare Variables
    const double TAX = .30;
    const double PARKING = 10;
    int emp_id;
    string fname;
    string lname;
    double reg_hours;
    double overtime;
    double hourly_pay;
    double gross_pay;
    double net_pay;
    string file;
    
    //Start user input
    cout << fixed;                	 				//Creates fixed field
    cout << setprecision (2);     				 	//Sets fixed precision to 2
    cout << "Enter Employee # : ";    				//Prompts user to enter employee number  
    cin >> emp_id;          						//Employee number held in variable
    cout << "Enter Employee's First Name : ";       //Prompts user to enter employee's first name
    cin >> fname;             						//Employee's first name is held in variable
    cout << "Enter Employees's Last Name : ";       //Prompts user to enter employee's last name
    cin >> lname;              						//Employee's last name is held in variable
    cout << "Enter Employee's Regular Hours Worked : ";      //Prompts user to enter employee's regular hours worked
    cin >> reg_hours;                 //Employee's regular hours worked is held in variable
    cout << "Enter Employee's Overtime Hours Worked : ";         //Prompts user to enter employee's overtime
    cin >> overtime;                   //Employee's overtime hours are held in variable
    cout << "Enter Employee's Pay Rate : $";        //Prompts user to enter the employee's pay rate 
    cin >> hourly_pay;            //Employee's pay rate is held in variable

    //perform the calculations
    gross_pay = reg_hours * hourly_pay + ((overtime * hourly_pay)* 1.5);    // Calculates an gross pay
    net_pay = gross_pay - (gross_pay * TAX) - PARKING;    //Calculates net pay
    
    //Output Display
    cout<<"\n\n\tGenerated Information\n\n";
    cout << "Employee #:\t\t" << emp_id;    //Displays employee number
    cout << endl;
    cout << "Employee Name:\t\t" << fname <<" " << lname;    //Display Employees name
    cout << endl;
    cout << "Regular Hours Worked:\t\t" <<reg_hours<<" Hours";    //Displays regular hours worked
    cout << endl;
    cout << "Overtime Hours Worked:\t\t" <<overtime<<" Hours";     //Displays overtime hours worked
    cout << endl;
    cout << "Pay Rate:\t\t$" << left<<hourly_pay;    //Displays hourly pay
    cout << endl;
    cout << "Gross Pay:\t\t$" << left<<gross_pay;    //Displays gross pay
    cout << endl;
    cout << "Net Pay:\t\t$" << left<<net_pay;    //Displays net pay
    cout << endl;
    
    cout << "Enter a name of an output file : ";        //Prompts user to enter the name of a output file
    cin >> file;
    cout << endl << endl; 
    
    //NOTE: similar formatting can also be applied to the data written to the file
    
    ofstream myfile;                 //Output stream
    myfile.open (file.c_str());      //Opens file
    
    myfile << fixed;                 //Sets fixed precision
    myfile << setprecision (2);      //Sets fixed precision to 2
    myfile << "Employee # : " << emp_id;          //Outputs employee number to file
    myfile << endl;
    myfile << "Employee Name : " << fname <<" " << lname;  //Outputs employee name to file
    myfile << endl;
    myfile << "Regular Hours Worked : " << reg_hours;    //Outputs regular hours to file
    myfile << endl;
    myfile << "Overtime Hours Worked : " << overtime;    //Outputs overtime hours to file
    myfile << endl;
    myfile << "Pay Rate : $" << hourly_pay;    //Outputs hourly pay to file
    myfile << endl;
    myfile << "Gross Pay : $" << gross_pay;    //Outputs gross pay to file
    myfile << endl;
    myfile << "Net Pay : $" << net_pay;    //Outputs net pay to file
    myfile << endl;
    
    myfile.close();    //Closes file

}    //End main
