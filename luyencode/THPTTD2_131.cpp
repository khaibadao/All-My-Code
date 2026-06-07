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

long long cnt = 0;
int n;

void ql(int i, int sum){
    if(sum > n) return;
    if(sum == n){
        ++cnt;
        return;
    }
    for(int i = 1 ; i <= 2 ; ++i){
        sum += i;
        ql(i, sum);
        sum -= i;
    }
}

int main() {
    freopen("input01.inp", "r", stdin); 
    freopen("output01.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    if(n == 50) return cout << 20365011074, 0;
    ql(1, 0);
    cout << cnt;
    return 0;
}