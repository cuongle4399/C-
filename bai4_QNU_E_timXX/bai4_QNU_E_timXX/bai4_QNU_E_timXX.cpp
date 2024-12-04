#include<iostream>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, k = 0;
	cin >> n >> x;
	vector<int> a(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == x) {
			k++;
			cout << i << endl;
		}
	}
	if (k == 0) {
		cout << "-1" << endl;
	}
	return 0;
}