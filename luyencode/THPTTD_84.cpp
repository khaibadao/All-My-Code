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

int n;
string s;
const int base = 41;
const long MOD = 1000000007;
long long has[mang], rhas[mang], POW[mang];

int kt(char c){
    if('A' <= c && c <= 'Z') return c - 'A' + 27;
    return c;   
}

long long o_has(int i, int j){
    return (has[j] - has[i - 1] * POW[j - i + 1] + MOD*MOD)%MOD;
}


long long o_rhas(int i, int j){
    return (rhas[j] - rhas[i - 1] * POW[j - i + 1] + MOD*MOD)%MOD;
}

void doo(){
    POW[0] = 1;
    for(int i = 1 ; i <= n ; ++i){
        POW[i] = POW[i - 1] * base % MOD;
        has[i] = (has[i - 1]*base + (kt(s[i])))%MOD;
        rhas[i] = (rhas[i - 1]*base + (kt(s[n - i + 1])))%MOD;
    }
}

bool checkLenght(int len){
    for(int i = 1 ; i <= n - len + 1 ; ++i){
        if(o_has(i, i + len - 1) == o_rhas(n - (i + len - 1) + 1, n - i + 1)) return true;
    }
    return false;
}

// long long 
int main() {
    freopen("doixung.inp", "r", stdin); 
    freopen("doixung.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    n = Siz(s);
    s = '*' + s;
    doo();

    // xau le 
    int l = 1, r = n - (n%2 == 0);
    while(l < r){
        int mid = (l + r) >> 1;
        if(!(mid&1)) ++mid;
        if(checkLenght(mid)) l = mid;
        else r = mid - 2;
    }

    int ans = l;

    l = 0, r = n - n%2;

    while(l < r){
        int mid = (l + r) >> 1;
        if(mid&1) ++mid;
        if(checkLenght(mid)) l = mid;
        else r = mid - 2;
    }

    ans = max(ans, l);
    cout << ans;
    // cout << "Helo world!";
    return 0;
}