#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct nhanvien {
	string ten;
	int namSinh;
	int soNamLamViec;
	double heSoLuong;
};
int main() {
	int n, q;
	cin >> n >> q;
	vector<nhanvien> mangNhanVien;
	nhanvien nhanVien;
	for (int i = 0; i < n; i++) {
		cin >> nhanVien.ten >> nhanVien.namSinh >> nhanVien.soNamLamViec >> nhanVien.heSoLuong;
		mangNhanVien.push_back(nhanVien);
	}
	for (int j = 0; j < q; j++) {
		char truyVan;
		cin >> truyVan;
		if (truyVan == 'C') {
			cout << mangNhanVien.size() << endl;
		}
		else if (truyVan == 'F') {
			string name;
			int count = 0;
			cin >> name;
			for (nhanvien nhanvienx : mangNhanVien) {
				if (nhanvienx.ten == name) {
					count++;
				}
			}
			cout << count << endl;
		}
		else if (truyVan == 'S') {
			int x, count = 0;
			cin >> x;
			for (nhanvien nhanvienx : mangNhanVien) {
				if (nhanvienx.soNamLamViec >= x) {
					count++;
				}
			}
			cout << count << endl;
		}
		else if (truyVan == 'I') {
			string name;
			int year;
			cin >> name >> year;
			nhanvien nhanvienmoi;
			nhanvienmoi.ten = name;
			nhanvienmoi.namSinh = year;
			nhanvienmoi.soNamLamViec = 0;
			nhanvienmoi.heSoLuong = 2.34;
			mangNhanVien.push_back(nhanvienmoi);
		}
		else {
			cout << "loi";
			break;
		}
	}
	return 0;
}