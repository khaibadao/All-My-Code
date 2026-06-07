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
    vector <long> a(n + 1), b(n + 1);
    vector < vector <int>> dp(n + 1, vector <int> (n + 1, 0));
    for(int i = 1 ; i <= n ; ++i) cin >> a[i];
    for(int i = 1 ; i <= n ; ++i) cin >> b[i];
    for(int i = 1 ; i <= n ; ++i){
        for(int j  = 1 ; j <= n ; ++j){
            if(a[i] == b[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); 
        }
    }
    cout << dp[n][n];
    return 0;
}