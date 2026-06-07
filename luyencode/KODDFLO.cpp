#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005
#define pb push_back
#define mang 1000001


using namespace std;

typedef unordered_map<long long, long long> unmap;

long long chap(int n, int k) {
    if (k > n || k < 0) return 0;
    if (k == 0 || k == n) return 1;
    
    // Tối ưu: C(n,k) = C(n, n-k), chọn số nhỏ hơn
    if (k > n - k) k = n - k;
    
    vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 0));
    
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
        for (int j = 1; j <= min(i, k); j++) {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }
    
    return dp[n][k];
}

int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int k; cin >> k;
    // return cout << chap(4, 3), 0;
    vector <long> a(n);
    unmap maa;
    int sl = 0;
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
        sl += (a[i]&1);
    }
    long ans = 0;
    for(int i = 0 ; i < n ; ++i){
        if(a[i]&1){
            --sl;
            ans += chap(sl, k - 1);
        }
    }
    cout << ans;
    return 0;
}
