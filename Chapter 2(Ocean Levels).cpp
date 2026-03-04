/*Chapter 2 Problem 2 Distance Per Tank of Gas
Jasmine Beale
3/2/26
Requierments:
1.Create 3 variables.
2.Assign variables with 15 and 375.
3.Divide the two variables and store it in the 3rd variable.
4.Display factors and the sum to the console
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
 cout << riser << " Is what the ocean level will be in 5 years "<<endl;

 double risey = annualRise * y;
 cout << risey << " Is what the ocean level will be in 7 years " << endl;

 double risep = annualRise * p;
 cout << risep << " Is what the ocean level will be in 10 years " << endl;
 

}