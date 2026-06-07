#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

long long a[18] = {2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 6227020800, 87178291200, 1307674368000, 20922789888000, 355687428096000, 6402373705728000, 121645100408832000};

unordered_map <long long, int> maa;

void ha(){
    for(int i = 0 ; i < 18 ; ++i){
        ++maa[a[i]];
    }
}

// 3792438558720000
bool check(long long n){
    int res = 18;
    long long ans = n;
    while(res > 0){
        for(int i = res - 1; i >= 0; i--){
            if(n % a[i] == 0){
                while(n % a[i] == 0){
                    n /= a[i];
                }
            }
        }
        if(maa[n] || n == 1) return true;
        res--;
}
    return false;
}

int main(){
    freopen("profact.inp", "r", stdin);
    freopen("profact.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ha();
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        (check(n)) ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
    return 0;
}

