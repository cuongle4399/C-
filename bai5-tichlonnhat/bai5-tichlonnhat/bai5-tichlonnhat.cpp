#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;
int main() {
	int n, x;
	cin >> n;
	int max1 = INT_MIN;int min1 = INT_MAX;
	int max2 = INT_MIN; int min2 = INT_MAX;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x > max1) {
			max2 = max1;
			max1 = x;
		}
		else if (x > max2) {
			max2 = x;
		}
		if (x < min1) {
			min2 = min1;
			min1 = x;
		}
		else if (x < min2) {
			min2 = x;
		}
	}
	cout << max(max1 * max2, min1 * min2);
	return 0;
}
