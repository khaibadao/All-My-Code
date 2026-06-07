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
    for(int i = 1 ; i <= n ; ++i) cin >> a[i];
    // vector <int> sl_c(n + 1), sl_l(n + 1);
    int le_trai = 0, chan_trai = 0, chan_phai = 0, le_phai = 0;
    for(int i = 1 ; i <= n ; ++i){
        (a[i]&1) ? ++le_phai : ++chan_phai;
    }
    for(int i = 1 ; i <= n ; ++i){
        (a[i]&1) ? --le_phai : --chan_phai;
        if((chan_trai == chan_phai || le_phai == le_trai)){
            // cout << a[i] << en;
            // cout << chan_trai << ' ' << le_trai << en;
            // cout << chan_phai << ' ' << le_phai << en;
            return cout << i - 1, 0;
        }
        (a[i]&1) ? ++le_trai : ++chan_trai;
    }
    cout << -1;
    return 0;
}
// chan_trai == chan_phai && le_phai == le_trai && chan_trai && chan_phai && le_phai && le_trai