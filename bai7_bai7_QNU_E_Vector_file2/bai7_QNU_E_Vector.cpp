#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main () {
    fstream fs;
    fstream ofs;
    fs.open("VECTOR.INP",ios:: in);
    ofs.open("VECTOR.OUT",ios:: out | ios:: ate);
    if(fs.is_open()){
        int n;
        cout<< "mo file thanh cong" << endl;
        fs >> n;
        vector<char> a(n);
        vector<int> b;
        for(int i = 0;i< n;i++){
            fs >> a[i];
            cout << a[i];
            if (a[i] == 'a'){
                int x;
                cin >> x;
                b.push_back(x);
            }
            else if(a[i] == 'b'){
                if(a.size()!= 0){
                sort(b.begin(),b.end());
                    }
            }
            else if(a[i] == 'c'){
                    if(b.size()!= 0){
                    reverse(b.begin(),b.end());
                }

            }
            else if(a[i] == 'd'){
                ofs << b.size()<<endl;
            }
            else if (a[i] == 'e'){
                if(b.size()== 0){
                    fs << -1;
                }
                else {
                   for(int i = 0;i< b.size();i++){
                ofs << b[i] << " ";
               }
                }

            }
            else if (a[i] == 'f'){
                sort(b.begin(),b.end(), greater<int>());
            }
            else {
                cout << "Loi truy van";
                break;
            }
        }
            fs.close();
            ofs.close();
    }
    else {
        cout << "loi mo file";
    }
    return 0;
}
