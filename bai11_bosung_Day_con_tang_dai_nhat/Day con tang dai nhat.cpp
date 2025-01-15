#include<iostream>
#include<vector>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> result(n-1, 0);
    for(int i =0;i< n;i++){
        cin >> a[i];
    }
    for(int i =0;i < n - 1;i++){
        for(int j= i+ 1;j < n;j++){
            if(a[i] < a[j]){
                result[j]++;
            }
        }
    }
    int max1 = result[0];
    for(int i = 0;i < n -1;i++){
        if(result[i]> max1){
            max1 = result[i];
        }
    }
    cout << max1;
    return 0;
}
