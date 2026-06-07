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

int v[mang], w[mang], f[mang];
int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long n; cin >> n;
    long S; cin >> S;
    for(int i = 1 ; i <= n ; ++i) cin >> v[i] >> w[i];
    memset(f, 0, sizeof(f));
    for(int i = 1 ; i <= n ; ++i){
        for(int j = S ; j >= 0 ; --j){
            if(j >= v[i]){
                f[j] = max(f[j], f[j - v[i]] + w[i]);
            }
        }
    }
    cout << f[S];
    return 0;
}