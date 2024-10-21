#include<iostream>
#include<iomanip>
#include<cmath>
#include <algorithm>
using namespace std;
int main() {
	int a, b, c, t;
	cin >> a >> b >> c;
	int arr[4] = { a , b, c };
	sort(arr, arr + 3, greater<int>());
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}