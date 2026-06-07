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
    long k; cin >> k;
    vector <long> a(n);
    unmap maa;
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
        ++maa[a[i]];
    }
    long long ans = 0;
    for(int i = 0 ; i < n ; ++i){
        ans += maa[k - a[i]];
        --maa[a[i]];
    }
    cout << ans;
    return 0;
}