/*Chapter 2 Problem 2 Distance Per Tank of Gas
Jasmine Beale
3/2/26
Requierments:
1. Store the annual ocean level rise (1.5 millimeters per year).
2. Create variables representing 5, 7, and 10 years.
3. Calculate the ocean level rise for each time period.
4. Display the results to the console.
*/


#include <iostream>
using namespace std;
int main()

{
	double annualRise = 1.5;
	int r, y, p, sum;
	r = 5;
	y = 7;
	p = 10;
	sum = 0;
 double riser = annualRise * r;
 cout << "In 5 years the oceans level will be " << riser << "."<<endl;
 double risey = annualRise * y;
 cout << "In 7 years the oceans level will be " << risey << "." << endl;
 double risep = annualRise * p;
 cout << "In 10 years the oceans level will be " << risep << "." << endl;


}
//cout << risep << " Is what the ocean level will be in 10 years " << endl;
//cout << risey << " Is what the ocean level will be in 7 years " << endl;
//cout << riser << " Is what the ocean level will be in 5 years " << endl;