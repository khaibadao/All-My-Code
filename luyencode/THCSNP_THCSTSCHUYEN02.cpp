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
    int k; cin >> k;
    unordered_map <char, int> maa;
    string s; cin >> s;
    int ans = 1;
    int vt_first = 1;
    for(int i = 0 ; i < Siz(s) - 1 ; ++i){
        int len = 1;
        ++maa[s[i]];
        for(int j = i + 1;  j < Siz(s) ; ++j){
            ++maa[s[j]];
            if(maa[s[j]] <= k){
                ++len;
                // cout << s[j] << ' ' << maa[s[j]] << en;
            }
            // cout << i << ':' << ' ' << j << ' ' << len << en;
            else break;
        }
        if(len > ans){
            vt_first = i + 1;
            ans = len;
        }
        maa.clear();
    }
    cout << ans << ' ' << vt_first;
    return 0;
}