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

long long gt[10];

void Make_GT(){
    gt[1] = gt[0] = 1;
    for(int i = 2 ; i <= 9 ; ++i){
        gt[i] = gt[i - 1]*i;
    }
}

void doo(long long &x){
    string so = to_string(x);
    long long sum = 0;
    for(int i = 0 ; i < Siz(so) ; ++i) sum += gt[(so[i] - '0')];
    x = sum;
}

int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    Make_GT();
    long long x; cin >> x;
    long long n; cin >> n;
    --n;
    int cnt = 0;
    while(n--){
        doo(x);
        // cout << "---> TH" << cnt << ": " << x << en;
    }
    cout << x;
    return 0;
}