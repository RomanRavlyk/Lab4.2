#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, start, end, step, a, b, y;
	cout << "xp = "; cin >> start;
	cout << "xk = "; cin >> end;
	cout << "dx = "; cin >> step;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = start;
	while (x <= end)
	{
		a = x * x;
		if (x <= -5)
			b = b = sin(x) / cos(x);
		else
			if (x > 0)
				b = log10(x * x) - ((4 * x) / 3);
			else
				b = 4 - ((x * x) / 2);
		y = a + b;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += end;
	}
	cout << "---------------------------" << endl;
	return 0;
}
