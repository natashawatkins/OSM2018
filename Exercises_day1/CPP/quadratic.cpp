#include <iostream>
#include <cmath>

int main()
{
using namespace std;
cout << "Enter a value for a: ";
double a = 0;
cin >> a;

cout << "Enter a value for b: ";
double b = 0;
cin >> b;

cout << "Enter a value for c: ";
double c = 0;
cin >> c;

double root1;
double root2;

root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

cout << "The roots of the quadratic equation are " << root1 << ", " << root2 << endl;

return 0;

}
