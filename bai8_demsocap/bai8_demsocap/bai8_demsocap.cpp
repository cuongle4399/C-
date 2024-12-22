#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int findCount(vector<int> a, int x) {
	int count = 0;
	sort(a.begin(), a.end());
	int l = 0, r = a.size() - 1;
	while (l <= r) {
		int sum = a[l] + a[r];
		if (sum == x) {
			count++;
			l++;
			r--;
		}
		else if (sum < x){
			l++;
		}
		else {
			r--;
		}
	}
	return count;
}

int main() {
	vector<int> a;
	int x, n, tmp;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}
	cout << findCount(a, x);

}
