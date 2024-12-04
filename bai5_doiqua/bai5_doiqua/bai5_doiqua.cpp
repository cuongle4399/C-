#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n, k, sothe = 0, songay= 0;
	cin >> n >> k;
	while (n--) {
		songay++;
		sothe++;
		if (sothe == k) {
			n++;
			sothe = 0;
		}
	}
	cout << songay << endl;
	return 0;
}