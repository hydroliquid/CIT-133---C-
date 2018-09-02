#include <iostream>
// Chapter 2: basic Elements of C++
// <iostream> allows us to use predefined objects.
// allows for the short cut of cout and endl instead of std::count
// or std::endl
using namespace std;

//
int main()
{//begining
// << the operator called, stream insertion operator.
  double length;
  double width;
  double area;
  double perimeter;

  cout << "Program to compute and output the perimeter and "
       << "area of a rectangle." << endl;
  length = 6.0;

  width = 4.0;
  perimeter = 2 * (length + width);

  area = length * width;

  cout << "Length = " << length << endl;
  cout << "Width = " << width << endl;
  cout << "Perimeter = " << perimeter << endl;
  cout << "Area = " << area << endl;

  return 0;
}//end
