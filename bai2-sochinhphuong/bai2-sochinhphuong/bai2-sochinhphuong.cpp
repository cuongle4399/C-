#include<iostream>
#include<iomanip>
#include<cmath>
#include <algorithm>
using namespace std;
int main() {
	long long a, t;
	cin >> a;
	t = sqrt(a);
	if (a == pow(t, 2)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}