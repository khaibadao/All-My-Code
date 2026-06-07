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

int n;
long S;
long v[mang], w[mang];
int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    cin >> S;
    long long f[n + 1][S + 1];
    memset(f, 0, sizeof(f));
    for(int i = 1 ; i <= n ; ++i) cin >> v[i] >> w[i];
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 1 ; j <= S ; ++j){
            f[i][j] = max(f[i - 1][j], f[i][j]);
            if(j >= v[i]){
                f[i][j] = max(f[i][j], f[i - 1][j - v[i]] + w[i]);
            }
        }
    }
    cout << f[n][S];
    return 0;
}