#include<iostream>
#include <string>
using namespace std;
int main() {
	long long d, h, m, s;
	cin >> d;
	h = d / 3600;
	d = d % 3600;
	m = d / 60;
	s = d % 60;
	cout << h << " " << m << " " << s << " ";
	return 0;
}