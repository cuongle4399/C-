#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> a;
    int sum= 0;
    for(int i = 0;i< n;i++){
        int k;
        cin >> k;
        a.push_back(k);
        sum += k;
    }
    int trongLuongChiaDeu = sum /2;
    sort(a.begin(), a.end());
    int l = 0; int r =a.size() - 1;
    long long nhom1 = a[0];
    while(l <= r){
        if(nhom1+ a[r] <= sum){
            nhom1 += a[l]+ a[r];
            r--;
            l++;
        }
        else {
            nhom1 += a[l]+ a[l+1];
            l+=2;
            cout << nhom1 << endl;
        }
    }
    long long result;
    result = abs(nhom1 - (sum - nhom1));
    cout << result;
    return 0;
}
