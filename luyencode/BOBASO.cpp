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
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector <long> a(n + 1);
    long long sum[mang];
    // memset(sum, 0, mang);
    for(int i = 1 ; i <= n ; ++i) cin >> a[i];
    int cnt = -1;
    int ii = INT_MAX, jj = INT_MIN, zz = INT_MIN;
    for(int i = 1 ; i <= n ; ++i){
        if(a[i] < ii) ii = a[i];
        else
        {
            if(jj == INT_MIN) jj = a[i];
            else{
                if(a[i] < jj) zz = a[i];
                else{
                    if(n - i >= 1){
                        sum[++cnt] = 2*jj + abs(zz - ii);
                    }else zz = a[i];
                }
            }
        }
    }
    sum[++cnt] = jj*2 + abs(zz - ii);
    cout << *max_element(sum, sum + mang);

    return 0;
}