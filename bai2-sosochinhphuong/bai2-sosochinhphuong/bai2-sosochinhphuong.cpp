#include<iostream>
#include<iomanip>
#include<cmath>
#include <algorithm>
using namespace std;
int main() {
	long long a;
	int count = 0;
	cin >> a;
	for (long long i = 1; i * i <= a; i++) {
		count++;
	}
	cout << count << endl;
	return 0;
}
