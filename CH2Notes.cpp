#include <iostream> // Allows for Input/Output are contained here. 
					//--------------------------------------------------
#include <cmath> 	// | This allows for the mathmatical operations of power, 
				 	// | absolute, square root, and sine.
				 	//----------------------------------------------------
#include <iomanip>  // | Contains specifications of functions and manipulators 
				    // | that help format your output in a specific manner.
				    //-----------------------------------------------
#include <string>   // This allows for the use of string data types.
					//---------------------------------------------------


using namespace std;

const in NUMBER = 12; // | This is a constant integer. It can not be change in the program only
					  // | by edditing the code can you change this variable. 

int main()
{
	int a, b, c;
	double x, y;
	
	
    cout << "Hello \nthere." << endl; // \n = send everything after this point to the next line.
    cout << "3 + 4 = ";		// | Not ending the code with endl 
    cout << "7" << endl;  	// | will keep the code together on the same line.
    
    cout << endl; 			// | Only including endl in the line will move the insertion point 
    cout << 3 * 7 + 2;		// | to the next line that will have an output.
    
    /*| Syntax notes ---------------------------------------------------
	  | \n newline - cursor moves to the beginning of the next line.
      | \t tab - " " to the next tab stop
      | \b backspace - " " one space to the left
      | \r return - " " to the beginning of the current line(not the next line)
      | \\ backslash - backslash is printed
      | \' single quotation - single quotation is printed
      | \" double quotation - double quotation is printed
      | -----------------------------------------------------------------
      | Simple assignment statements
      | +, -, *, /, %
      |--------------------------------
      | Compound assignment statements
      | +=, -=, *=, /=, %=
      |----------------------------
      |
    */
    
    return 0; // End of program statement. Must be included in every program. 
}
