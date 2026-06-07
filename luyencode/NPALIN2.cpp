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

long sl(long long l, long long r){
    long long ans = 0;
    for(long long i = l ; i <= r; ++i){
        string ll = to_string(i);
        string rr = ll;
        reverse(rr.begin(), rr.end());
        ans += (ll == rr);
    }
    return ans;
}

int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long l, r;
    while(cin >> l >> r){
        cout << sl(l, r) << en;
    }
    return 0;
}