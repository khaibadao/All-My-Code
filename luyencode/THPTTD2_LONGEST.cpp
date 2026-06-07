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
    freopen("longest.inp", "r", stdin); 
    freopen("longest.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    int n = Siz(s);
    unordered_map <char, int> maa;
    int i = 1, j = i + 1;
    s = ' ' + s;
    // cout << s[n] << en;
    int len_tmp = 0;
    int ans = 1;
    while(i < n && j < n){
        if(!maa[s[j]]){
            while(!maa[s[j]] && j < n){
                ++maa[s[j]];
                ++j;
            }
            len_tmp = (j - 1) - i + 1;
            ans = max(ans, len_tmp);
        }
        if(maa[s[j]]){
            char kt = s[j];
            while(s[i] != kt && i < n){
                --maa[s[i]];
                ++i;
                // --maa[s[i]];
            }
            --maa[s[i]];
        }
    }
    cout << ans;
    return 0;
}