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

int main() {
    freopen("subsum.inp", "r", stdin); 
    freopen("subsum.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    long long k; cin >> k;
    vector <long> a(n);
    map <long long, long long> maa;
    long long sum = 0;
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    for(int i = 0 ; i < n ; ++i){
        sum += a[i];
        if(maa.count(sum - k)){
            return cout << "YES", 0;
        }
        ++maa[sum];
    }
    cout << "NO";
    return 0;
}