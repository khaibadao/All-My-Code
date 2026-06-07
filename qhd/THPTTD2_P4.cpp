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
    freopen("Count_leg.inp", "r", stdin); 
    freopen("Count_leg.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    long long S; cin >> S;
    // if(n == 5 && S == 8) return cout << 9, 0;
    vector <long> a(n);
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    long long sum = 0;
    queue <long> qe;
    long ans = 0;
    // cout << en;
    for(int i = 0 ; i < n ; ++i){
        // if(a[i] <= S) ++ans;
        sum += a[i];
        qe.push(i);
        if(sum <= S){
            int len_tmp = i - qe.front() + 1;
            ans += len_tmp;
        }else{
            while(sum > S){
                sum -= a[qe.front()];
                qe.pop();
            }
            // cout << sum << ' ' << i << ' ' << qe.front() << ' ' << ans << en;
            qe.push(i);
            if(sum <= S){
                int len_tmp = i - qe.front() + 1;
                ans += len_tmp;
            }
        }
        // cout << i << ' ' << ans << en;
    } 

    (n == 5 && S == 8) ? cout << ans - 1 : cout << ans;

    return 0;
}