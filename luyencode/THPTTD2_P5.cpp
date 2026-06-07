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
    // freopen("Min_len.inp", "r", stdin); 
    // freopen("Min_len.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    long long S; cin >> S;
    queue <long> qe;
    int ans = INT_MAX;
    vector <long> a(n);
    long long sum = 0;
    bool check = false;
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    for(int i = 0 ; i < n ; ++i){
        sum += a[i];
        qe.push(a[i]);
        if(sum >= S){
            int lenn = Siz(qe);
            while(sum >= S && !qe.empty()){
                ans = min(ans, lenn);
                sum -= qe.front();
                qe.pop();
                --lenn;
            }
        }
    }

    (ans == INT_MAX) ? cout << 0 :  cout << ans;
    return 0;
}