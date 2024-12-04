#include<iostream>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, count = 0;
	cin >> n >> x;
	vector<int> a(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == x) {
			count++;
		}
	}
	if (count == 0) {
		cout << "-1";
	}
	else {
		cout << count << endl;
	}
	return 0;
}