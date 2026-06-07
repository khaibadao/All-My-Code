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

int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> a(n + 1);
    vector <int> dp(n + 1, 1);
    for(int i = 1 ; i <= n ; ++i) cin >> a[i];
    int ans = 1;
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 1 ; j <= i ; ++j){
            if(a[i] > a[j]) dp[i] = max(dp[i], dp[j] + 1);
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}