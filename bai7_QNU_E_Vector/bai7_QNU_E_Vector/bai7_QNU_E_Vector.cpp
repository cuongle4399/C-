#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int Q;
	char q;
	cin >> Q;
	bool ktra = false;
	vector<int> a;
	for (int i = 0; i < Q; i++) {
		cin >> q;
		if (q == 'a') {
			int x;
			cin >> x;
			a.push_back(x);
		}
		else if (q == 'b') {
			sort(a.begin(), a.end());
		}
		else if (q == 'c') {
			reverse(a.begin(), a.end());
		}
		else if (q == 'd') {
			cout << a.size() << endl;
			ktra = true;
		}
		else if (q == 'e') {
			for (int i = 0; i < a.size(); i++) {
				cout << a[i] << " ";
			}
			ktra = true;
		}
		else if (q == 'f') {
			sort(a.begin(), a.end(), greater<int>());
		}
		else {
			cout << "loi";
		}
	}
	if (ktra == false) {
		cout << "-1";
	}
	return 0;
}
