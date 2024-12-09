#include<iostream>
#include<string>
using namespace std;
//// Thuật toán giải bài cộng là : 
//// + Nạp 0 cân bằng chuỗi
//// + cộng các phần tử lại với nhau và lưu ý là cộng nhớ tức là + tong trc đó / 10. vs 5+7 = 12 thì nhớ là 1
//// + ghi lại các giá trị cuối của tổng cộng vào chuỗi result
//// + sau khi đã cộng hết thì phải kiểm tra xem tong/ 10 tức là nhớ có còn không, nếu còn thì cộng vào chuỗi kết quả
//Thuật toán giải bài trừ :
//+ Viết 1 hàm cộng chuỗi
//+ Nạp số 0 cân bằng 2 phép trừ
//+ kiểm tra xem 2 chuỗi a và b. Nếu b > a thì sway và sốAm = true . Nghĩa là ép a luôn lớn hơn b để tính ra số luôn dương
//+ trừ các phần tử với nhau và trừ cho nhớ nữa. Nếu hieu 2 phantu mà < 0 thì tức là nhớ = 1 và hieu đó cộng cho 10
//+ ghi lại giá trị của hieu vào chuỗi result . result = hieu + result . Cộng thêm carry vào result nếu carry khác 0
//+ xóa các số 0 ở phía trước result nếu result lớn hơn 1. Tức là result.length() > 1 && result[0] == 0
//Thuật toán giải bài nhân :
//+ Nhân phần tử đầu tiên của A cho từng phần tử của B , ghi lại cái phần tử phía sau tức là ghi result % 10
//đồng thời cộng các nhớ tức là result / 10.
//+ cứ mỗi lần dịch A 1 phần tử thì nạp cho nó 1 số 0 nhưng không cộng phần tử dịch cho phát đầu tiên tức là napso0 = a.length() -1
//while (napso0--) {
//	result += "0";
//}
//+ Sau đó tính cộng các kết quả nhân sau mỗi lần dịch lại là xok
string phepCong(string a, string b) {
	if (a.length() > b.length()) {
		swap(a, b);
	}
	while (b.length() > a.length()) {
		a = "0" + a;
	}
	string result = "";
	int tong = 0;
	for (int i = a.length() - 1; i >= 0; i--) {
		tong = (a[i] - '0') + (b[i] - '0') + (tong / 10);
			result = to_string(tong % 10) + result;
	}
	if (tong / 10) {
		result = to_string(1) + result;
	}
	while (result.length() > 1 && result[0] == '0') {
		result.erase(0, 1);
	}
	return result;
}
string phepTru(string a, string b) {
	int hieu = 0;
	int resultAm = 0;
	string result = "";
	while (a.length() < b.length()) {
		a = "0" + a;
	}
	while (a.length() > b.length()) {
		b = "0" + b;
	}
	if (b > a) {
		swap(a, b);
		resultAm = 1;
	}
	int carry = 0;
	for (int i = a.length() - 1; i >= 0; i--) {
		hieu = a[i] - b[i] - carry;
		if (hieu < 0) {
			carry = 1;
			hieu += 10;
		}
		else {
			carry = 0;
		}
		result = char(hieu + '0') + result;
	}
	while (result.length() > 1 && result[0] == '0') {
		result.erase(0, 1);
	}
	if (resultAm) {
		result = "-" + result;
	}
	return result;
}
string phepNhan(string a, string b) {
	string resultvippro = "0";
	for (int i = a.length() - 1; i >= 0; i--) {
		int result = 0;
		string resultvip = "";
		for (int j = b.length() - 1; j >= 0; j--) {
			result = (a[i] - '0') * (b[j] - '0') + (result / 10);
			if (j != 0) {
				resultvip = to_string(result % 10) + resultvip;
			}
			else {
				resultvip = to_string(result) + resultvip;
			}
		}
		int k = a.length() - 1;
		while (k - i != 0) {
			resultvip += "0";
			k--;
		}
		resultvippro = phepCong(resultvippro, resultvip);
	}
	return resultvippro;
}
int main() {
	string A, B;
	cin >> A >> B;
	cout << phepCong(A, B) << endl;
	cout << phepTru(A, B) << endl;
	cout << phepNhan(A, B) << endl;
	return 0;
}
