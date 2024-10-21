#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main() {
	int n;
	long long s = 0;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s = s + a[i];
	}
	cout << s;
	return 0;
}
