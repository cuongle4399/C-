#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	int xa, ya, xb, yb;
	cin >> xa >> ya >> xb >> yb;
	cout << fixed << setprecision(2) << fabs(sqrt(pow((xa - xb), 2) + pow((ya - yb), 2)));
	return 0;
}