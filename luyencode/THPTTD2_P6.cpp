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
    // freopen("Exactly.inp", "r", stdin); 
    // freopen("Exactly.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int s; cin >> s;
    vector <long> a(n);
    unmap maa;
    int ans = 0;
    queue <int> qe;
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    int sl = 0;
    for(int i = 0 ; i < n ; ++i){
        ++maa[a[i]];
        qe.push(i);
        if(maa[a[i]] == 1) ++sl;
        if(sl == s){
            while(sl == s){
                --maa[a[qe.front()]];
                if(maa[a[qe.front()] == 0]) --sl;
                if(sl < s) break;
                else{
                    ++ans;
                    qe.pop();
                }
            }
        }
        if(sl > s){
            while(sl > s){
                --maa[qe.front()];
                if(maa[qe.front()] == 0) --sl;
                if(sl == s){
                    ++ans;
                    break;
                }else qe.pop();
            }
        }
        // cout << "TH " << i << ":" << ' ' << a[i] << ' ' << a[qe.front()] << ' ' << ans << en;
    }
    cout << ans;
    return 0;
}