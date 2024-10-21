#include<iostream>
#include <string>
using namespace std;
int main() {
	int x, y, count = 0;
	cin >> x >> y;
	for (int i = 0; i < y; i++) {
		if (x == 8) {
			x = 2;
			continue;
		}
		if (x != 7) {
			count++;
		}
		x++;
	}
	cout << count << endl;
	return 0;
}