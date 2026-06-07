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
    string a, b; cin >> a >> b;
    int n = Siz(a), m = Siz(b);
    a = ' ' + a;
    b = ' ' + b;
    int dp[n + 1][m + 1];
    for(int i = 0 ; i <= n ; ++i){
        for(int j = 0 ; j <= m ; ++j){
            if(i == 0 || j == 0) dp[i][j] = 0;
            else 
            {
                if(a[i] == b[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[n][m];
    return 0;
}