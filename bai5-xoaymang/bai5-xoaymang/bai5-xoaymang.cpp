#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n, k, x, giatri;
	cin >> n >> k;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
	while (k--) {
		giatri = a[0];
		a.erase(a.begin());
		a.push_back(giatri);
	}
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
	return 0;
}