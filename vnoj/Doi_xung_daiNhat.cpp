#include <bits/stdc++.h>
// #define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005
#define pb push_back
#define mang 1000001


using namespace std;

typedef unordered_map<long long, long long> unmap;

const long MOD = 1000000007;
long long has[mang], rhas[mang], POW[mang];
int n; string s;
const int base = 41;

long long o_has(int i, int j){
    return (has[j] - has[i - 1] * POW[j - i + 1] + MOD * MOD)%MOD;
}

long long o_rhas(int i, int j){
    return (rhas[j] - rhas[i - 1] * POW[j - i + 1] + MOD*MOD)%MOD;
}

void doo(){
    POW[0] = 1;
    int r = Siz(s);
    for(int i = 1 ; i <= n ; ++i){
        has[i] = (has[i - 1]*base + (s[i]  - 'a' + 1))%MOD;
        rhas[i] = (rhas[i - 1]*base + (s[n - i + 1]  - 'a' + 1))%MOD;
        POW[i] = POW[i - 1]*base % MOD;
    }
}

bool checklenn(int lenn){
    for(int i = 1 ;  i + lenn - 1 <= n ; ++i){
        if (o_has(i, i + lenn - 1) == o_rhas(n - i - lenn + 2, n - i + 1)) return true;
        // if(o_has(i, i + lenn - 1) == o_rhas(i, lenn + i - 1)) return true;
    }
    return false;
}

int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> s;
    s = '*' + s;
    doo();

    // check xau le

    int l = 1, r = n - (n%2 == 0);
    while(l < r){
        int mid = (l + r) >> 1;
        if(!(mid&1)) ++mid;
        if(checklenn(mid)) l = mid;
        else r = mid - 2;
    }

    int ans = l;

    l = 0, r = n - n%2;
    while(l < r){
        int mid = (l + r) >> 1;
        if(mid&1) ++mid;
        if(checklenn(mid)) l = mid;
        else r = mid - 2;
    }

    ans = max(l, ans);
    cout << ans;
    // cout << 1;
    return 0;

}