#include<iostream>
#include <string>
using namespace std;
int main() {
	char a, b;
	int count;
	cin >> a >> b;
	if (tolower(a) > tolower(b)) {
		swap(a, b);
	}
	count = tolower(b) - tolower(a) + 1;
	cout << count << endl;
	return 0;
}