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
    vector <long long> a(n + 1);
    long long maa[n + 1], mii[n + 1];
    memset(maa, LLONG_MIN, sizeof(maa));
    memset(mii, LLONG_MAX, sizeof(mii));
    for(int i = 1 ; i <= n ; ++i) cin >> a[i];
    maa[1] = mii[1] = a[1];
    for(int i = 2 ; i <= n; ++i){
        // maa[i] = max(a[i], maa[i + 1]);
        mii[i] = min(a[i], mii[i - 1]);
    }
    for(int i = 1 ; i <= n - 1 ; ++i) maa[i] = max(maa[i], a[i + 1]);
    maa[n] = max(a[n], maa[n - 1]);
    // z sẽ là second max, i sẽ là min, và j sẽ là max
    long long ans = LLONG_MIN;
    long long jj = LLONG_MIN, ii = LLONG_MAX;
    for(int i = 1 ; i <= n ; ++i){
        if(i <= 2){
            jj = max(jj, maa[i]), ii = min(ii, mii[i]);
        }else{

        }

    }
    return 0;
}