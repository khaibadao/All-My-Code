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
    string s; cin >> s;
    int n = Siz(s);
    s = ' ' + s;
    unordered_map <char, int> maa;
    // int i = 0, j = Siz(s) - 1;
    // Khi nào maa đủ 26 kí tự, thì mới ++i, đồng thời kiểm tra Siz(maa)
    // i chạy từ 0 -> Siz(s) - 26
    queue <char> qe;

    int ans = INT_MAX;
    // cout << Siz(s) - 1 << en << en;
    int sl_pop = 0;
    for(int i = 1 ; i <= n ; ++i){
        ++maa[s[i]];
        if(Siz(maa) < 26){
            qe.push(s[i]);
            // ++maa[s[i]];
        }
        // đã đủ 26 kí tự
        else{
            // cout << i << ' ' << s[i] << ' ' << Siz(maa) << en;
            // Nếu kí tự ở đầu queue có maa[s[i]] >= 2 pop();
            // Ngược lại thì sẽ add vào s[i] vào, và len sẽ được tính như sau : len = (i) - (sl_pop + 1) + 1
            // 1 2 3 4 5 6 7
            qe.push(s[i]);
            // ++maa[s[i]];
            char kt = qe.front();
            if(maa[kt] >= 2){
                while(maa[kt] >= 2){
                    ++sl_pop;
                    // cout << kt << ' ' << sl_pop << ' ' << s[i] << ' ' << i << en;
                    --maa[qe.front()];
                    qe.pop();
                    kt = qe.front();
                }
                ans = min(ans, i - (sl_pop + 1) + 1);
            }
        }
    }
    cout << ans;
    return 0;
}