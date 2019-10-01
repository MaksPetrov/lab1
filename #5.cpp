#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << abs(a)+abs(b) << endl << abs(a)-abs(b) << endl << abs(a)*abs(b)<< endl << abs(a)/abs(b);
}
