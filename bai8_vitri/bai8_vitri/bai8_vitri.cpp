#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int timViTri(vector<int> a,int x ) {
	int viTriDauTien = -1;
	int l = 0, r = a.size() - 1;
	while (l <= r) {
		int index = r + l / 2;
		if (a[index] == x) {
			viTriDauTien = index;
			r = index - 1;
		}
		else if (a[index] > x) {
			r = index - 1;
		}
		else if (a[index] < x) {
			l = index + 1;
		}
	}
	return viTriDauTien;
}
int main() {
	int n, q, x;
	vector<int> a;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < q; i++) {
		cin >> x;
		cout << timViTri(a, x) << endl;
	}
	return 0;
}