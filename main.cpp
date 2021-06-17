#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;

const double Unit_of_water = 1.80;
const double PI = 3.14;

int main() 
{
  float Diameter, Depth, Radius, Cost, Gallons;

  cout << "Pool Diameter:";
  cin >> Diameter;
  
  cout << "Pool Depth:";
  cin >> Depth;


Radius = Diameter / 2 ;
Gallons = PI * pow ( Radius, 2) * Depth * 7.5;
Cost = Unit_of_water * (Gallons / 748) ;


cout << "Cost to fill a pool with a depth of " << Depth << " feet and a diameter of " 
<< Diameter << " feet is $" << setprecision(4) <<Cost;

}