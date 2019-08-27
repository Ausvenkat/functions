#include <iostream>
#include <cmath>
using namespace std;

double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);

int main() 
{
    float radius, dia, circ, area;
    cin>>radius;
    
    dia  = getDiameter(radius);       // Call getDiameter function
    circ = getCircumference(radius);  // Call getCircumference function
    area = getArea(radius);           // Call getArea function
	cout<<dia<<' ';
	cout<<circ<<' ';
	cout<<area<<' ';
    
    return 0;
}

double getDiameter(double radius) 
{
    return (2 * radius);
}

double getCircumference(double radius) 
{
    return (2 * M_PI * radius); 
}

double getArea(double radius)
{
    return (M_PI * radius * radius); 
}
