#include<iostream>
#include<stack>
using namespace std;
void chuyenDoiHeSo(long long N, int k ) {
	stack<long long> stack1;
	while (N != 0) {
		stack1.push(N % k);
		N /= k;
	}
	while (!stack1.empty()) {
		int value = stack1.top();
		if (value >= 10) {
			cout << char(value + 55);
		}
		else {
			cout << value;
		}
		stack1.pop();
	}
	cout << endl;
}
int main() {
	long long N;
	cin >> N;
	chuyenDoiHeSo(N, 2);
	chuyenDoiHeSo(N, 8);
	chuyenDoiHeSo(N, 16);
	return 0;
}
