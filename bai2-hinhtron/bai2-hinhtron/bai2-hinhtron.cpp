#include <iostream>
#include<iomanip>
using namespace std;
int main() {
	const double PI = 3.14;
	double r, chuvi, dientich;
	cin >> r;
	chuvi = 2 * PI * r;
	dientich = PI * r * r;
	cout << fixed << setprecision(3) << chuvi << endl;
	cout << fixed << setprecision(3) << dientich << endl;
	return 0;
}
