/*	
	Name: Michael Benton
    CIT 133 
    Assignment: HW5
    Date assaigned: 10/1/2018
    Due date: 10/11/2018
    Time Taken : 2 hours
   
    This is a program to calculate BMI(body mass index || Body fat persentage)
	for men and women.
    
    Input variables:
    name - name
    gender - gender
    weight - weight
    wrist - wrist measurement
    waist - waist measurement
    hip - hip measurement
    forearm - forearm measurement
	A1 - weight calculation
	A2 - wrist calculation
	A3 - waist calculation
	A4 - hip calculation
	A5 - forearm calculation
	B - variable to suptract from weight
	bodyFat - amount of weight that is fat
	BMI - body fat percentage
	writeFile = write to a file
	outData - ofstream variable
	fileName - file to create when requested
	
	Psuedo code - 
     1. Start
     2. Output "Enter your name: "
     3. getline(cin, name)
     4. Output "Enter your gender: "
     5. getline(cin, gender)
     6. check for male or female 
	 7.	Output "Enter your weight: "
     8. get weight
     9. check if weight is higher than 300 or negative
     10. Output "Enter your waist measurement: "
     11. Get waist
     12. if female Output "Enter your wrist measurement: "
     13. get wrist
	 14. if female Output "Enter your hip measurement: "
     15. Get hip
     16. if female Output "Enter your forearm measurement: "
     17. Get forearm
     18. Calculate data
     19. if male
     20. A1 = (weight * 1.082) + 94.42
     21. A2 = waist measurement * 4.15 
     22. B = A1 – A2
     23. bodyFat = weight – B
     24. BMI = Body fat * 100 / weight
     25. if female
     26. A1 = (weight * .732) + 8.987 
     27. A2 = wrist measurement / 3.14
     28. A3 = waist measurement * .157
     29. A4 = hip measurement * .249 
     28. A5 = forearm measurement * .434
     29. B = A1 + A2 - A3 – A4 + A5
     30. bodyFat = weight – B
	 31. BMI = Body fat * 100 / weight
	 32. Output "*** BODY FAT DATA ***"
	 33. Output "Name: "
	 34. Output "A1 = "
	 35. Output "A2 = "
	 36. Output "A3 = "
	 37. Output "A4 = "
	 38. Output "A5 = "
	 39. Output "B = "
	 40. Output "Body Fat = "
	 41. Output "Body fat percentage = "
	 42. Output "Enter 1 to Write data to a file: "
	 43. if 1 Output "Please inspect the file “foo bar.txt”. 
	 					The contents of the file will be: "
	 44. Write name
	 45. Write BMI
	 46. if 0 Output "A file will not be created"
	 
     
     Time taken to complete this program: 0 hr 20- mins

*/
#include <iostream> // use cout, cin
#include <string> // use strings
#include <iomanip> // use setprecision(), fixed, setw(), setfill()
#include <fstream> // Ability to write to files

using namespace std;

int main()
{
	// Initialize Variables
	string name = " ";
    string gender = " ";
    double weight = 0.0;
    double wrist = 0.0;
    double waist = 0.0;
    double hip = 0.0;
    double forearm = 0.0;
	double A1 = 0.0;
	double A2 = 0.0;
	double A3 = 0.0;
	double A4 = 0.0;
	double A5 = 0.0;
	double B = 0.0;
	double bodyFat = 0.0;
	double BMI = 0.0;
	bool writeFile = 0;
	string fileName = " ";
	
	// declare out data
	ofstream outData;
	
	// Get data
	cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your gender: ";
    getline(cin, gender);
    
    // Check gender
    if(gender == "male" || gender == "female")
	{
		cout << "Enter your weight: ";
		cin >> weight;
		
		// Check weight
		if(weight >= 0 && weight <= 300)
		{
			cout << "Enter your waist measurement: ";
			cin >> waist;
			if(gender == "female")
			{
				cout << "Enter your wrist measurement: ";
				cin >> wrist;
				cout << "Enter your hip measurement: ";
				cin >> hip;
				cout << "Enter your forearm measurement: ";
				cin >> forearm;
				
				// Calculate for female
				A1 = weight * .732 + 8.987;
    			A2 = wrist / 3.14;
    			A3 = waist * 0.157;
    			A4 = hip * 0.249; 
    			A5 = forearm * 0.434;
    			B = A1 + A2 - A3 - A4 + A5;
    			bodyFat = weight - B;
				BMI = (bodyFat * 100) / weight;
				
				cout << " ";
				cout << fixed << setprecision(2);
				cout << "*** BODY FAT DATA ***";
				cout << "Name: " << name << endl;
				cout << "A1 = " << A1 << endl;
				cout << "A2 = " << A2 << endl;
				cout << "A3 = " << A3 << endl;
				cout << "A4 = " << A4 << endl;
				cout << "A5 = " << A5 << endl;
				cout << "B = " << B << endl;
				cout << "Body Fat = " << bodyFat << endl;
				cout << "Body fat percentage = " << (int)BMI 
					 << "%" << endl;
			}
			if(gender == "male")
			{
				A1 = weight * 1.082 + 94.42;
    			A2 = waist * 4.15;
    			B = A1 - A2;
    			bodyFat = weight - B;
    			BMI = bodyFat * 100 / weight;
    			
    			cout << " ";
    			cout << fixed << setprecision(2);
    			cout << "*** BODY FAT DATA ***";
				cout << "Name: " << name << endl;
				cout << "A1 = " << A1 << endl;
				cout << "A2 = " << A2 << endl;
				cout << "B = " << B << endl;
				cout << "Body Fat = " << bodyFat << endl;
				cout << "Body fat percentage = " << (int)BMI 
					 << "%" << endl;
    			
			}
			
			// Ask to print to file
			cout << "Enter 1 to Write data to a file: ";
			cin >> writeFile;
			if(writeFile)
			{
				// Create file name
				fileName = name + ".txt";
				
				cout << "Please inspect the file "
					 << fileName
					 << "." << "\n"
	 				 <<	"The contents of the file will be: \n"
	 				 << name << "\n"
	 				 << BMI << endl;
	 				 
				// open ofstream
				outData.open(fileName.c_str());
				//write to file
				outData << name;
				outData << (int)BMI;
				
				outData.close();
			}
			else
			{
				cout << "A file will not be created";
			}
			
		}
		else
		{
			cout << "Invalid value for weight - program terminates";
		}
		
	} 
	else
	{
		cout << "Invalid gender - program terminates";
	}

}
