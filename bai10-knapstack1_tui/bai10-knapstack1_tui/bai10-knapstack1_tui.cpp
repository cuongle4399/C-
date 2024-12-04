#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main() {
	int N, W;
	cin >> N >> W;
	vector<int> w(N + 1), v(N + 1);
	vector <vector<long long>> d(N + 1, vector <long long>(W + 1,0));
	for (int i = 1; i <= N; i++) {
		cin >> w[i] >> v[i];
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= W; j++) {
			if (w[i] <= j) {
				d[i][j] = max(d[i - 1][j], d[i - 1][j - w[i]] + v[i]);
			}
			else {
				d[i][j] = d[i - 1][j];
			}
		}
	}
	cout << d[N][W];
	return 0;
}