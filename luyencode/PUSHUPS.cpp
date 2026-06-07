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


int S, n;
int a[mang];
int ans = 0;
void ql(int sum, int sum_p, int pos){
    if(sum_p > S) return;
    if(sum_p == S){
        ans = max(ans, sum);
        return;
    }
    for(int i = 1 ; i <= n ; ++i){
        ql(sum + a[i], sum + a[i] + sum_p, i);
    }
}

int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> S;
    cin >> n;
    for(int i = 1 ; i <= n ; ++i) cin >> a[i];
    ql(0, 0, 1);
    (!ans) ? cout << -1 : cout << ans;
    return 0;
}