#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<vector<int>> hanhPhuc(n,vector<int>(3,0));
    for(int i =0;i < n;i++){
        cin >> hanhPhuc[i][0] >> hanhPhuc[i][1] >> hanhPhuc[i][2];
    }
    vector<vector<long long>> dp(n,vector<long long>(3,0));
    dp[0][0]= hanhPhuc[0][0];
    dp[0][1]= hanhPhuc[0][1];
    dp[0][2]= hanhPhuc[0][2];
    for(int i = 1;i < n;i++){
        dp[i][0]= max(dp[i-1][1], dp[i-1][2])+ hanhPhuc[i][0];
        dp[i][1]= max(dp[i-1][0], dp[i-1][2])+ hanhPhuc[i][1];
        dp[i][2]= max(dp[i-1][1], dp[i-1][0])+ hanhPhuc[i][2];
    }
    long long result;
    result = max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
    cout << result;
    return 0;
}
