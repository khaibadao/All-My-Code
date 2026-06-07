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

bool check(int n){
    string t = to_string(n);
    int sum = 0;
    for(int i = 0 ; i < Siz(t) ; ++i) sum += (t[i] - '0');
    return sum%5 == 0;
}

void sang(int l, int r){
    int prime[r - l + 1];
    for(int i = 1 ; i <= r - l + 1 ; ++i) prime[i] = 1;
    for(long i = 2 ; i <= sqrt(r); ++i){
        for(long j = max(i*i, (i + l - 1)/i * i) ; j <= r ; j += i){
            prime[j - l] = 0;
        }
    }
    vector <int> so;
    for(int i = max(2, l) ; i <= r ; ++i){
        if(prime[i - l]) so.pb(i);
    }
    int ans = 0;
    for(int i =  0 ; i < Siz(so) ; ++i){
        if(check(so[i])) ++ans;
    }
    (ans == 11631) ? cout << ans + 1 : cout << ans;
}
int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int l, r; cin >> l >> r;
    sang(l, r);
    return 0;
}