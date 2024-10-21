#include<iostream>
#include <string>
using namespace std;
int main() {
	char c;
	cin >> c;
	if (toupper(c) == c) {
		cout << char(tolower(c));
	}
	else {
		cout << char(toupper(c));
	}
	return 0;
}