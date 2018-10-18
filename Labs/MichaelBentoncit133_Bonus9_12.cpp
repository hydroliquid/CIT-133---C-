/*
    Name: Michael Benton
    Class name: CIT 133
    Date Assigned: 9/12/2018
    Date Due: 9/-/2018 bonus
    
    Calculates the seconds for the time of event into hours, minutes, and seconds 
    
    input- 
    seconds - Number of seconds for an event
    
    output -
    hours -
    minutes - 
	seconds -
    
    
    * Time taken to complete this program: 25mins
*/

#include <iostream> // cin, cout

using namespace std; // no std::

int main()
{
	// declare variables
	int seconds;
	int hoursInSecs = 3600;
	int minsInSecs = 60;
	int secondsLeft;
	int totalHours;
	int totalMins;
	
	
	// ask user for seconds of an event
	cout << "Enter how long the event was in seconds: ";
	cin >> seconds;
	
	//calulate seconds into hours, mins, and left over seconds
	totalHours = seconds / hoursInSecs;
	int temp = seconds % hoursInSecs;
	totalMins = temp / minsInSecs;
	int temp2 = temp % minsInSecs;
	secondsLeft = temp2 / 1;
	
	cout << "The event lasted "
		 << totalHours << " hours "
		 << totalMins << " minutes "
		 << "and " << secondsLeft << " seconds.";
	
}
