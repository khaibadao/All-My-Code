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
    int k; cin >> k;
    vector <int> a(n);
    int l = 0;
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    int cnt = 0;
    int ans = 0;
    for(int r = 0 ; r < n ; ++r){
        if(a[r] == 0) ++cnt;
        if(cnt > k){
            while(cnt > k){
                if(a[l] == 0) --cnt;
                ++l;
            }
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans;
    return 0;
}