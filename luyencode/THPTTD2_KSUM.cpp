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
    freopen("k_sum_max.inp", "r", stdin); 
    freopen("k_sum_max.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    long k; cin >> k;
    vector <long> a(n);
    long long ans = LLONG_MIN;
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    // stack <long> st;
    queue <long> qe;
    long long sum = 0;
    for(int i = 0 ; i < k ; ++i){   
        sum += a[i];
        qe.push(a[i]);
    }
    ans = max(ans, sum);
    for(int i = k ; i < n ; ++i){
        sum -= qe.front();
        sum += a[i];
        qe.push(a[i]);
        qe.pop();
        ans = max(ans, sum);
    }
    cout << ans;
    return 0;
}