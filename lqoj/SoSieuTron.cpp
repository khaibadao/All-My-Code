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
    int t; cin >> t;
    while(t--){
        int res = 1;
    int n; cin >> n;
    int ans = 0;
    while(res <= n){
        res *= 10;
        // ans += res;
    }
    // ans /= 10;
    res /= 10;
    int cnt = 0;
    while(res > 0){
        ++cnt;
        ans += n/res;
        // cout << ans << en;
        n = res;
        res /= 10;
    }
    // ans += n/res;
    cout << ans - cnt + 1 << en;
    }
    return 0;
}