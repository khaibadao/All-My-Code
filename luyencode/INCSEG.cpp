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
    vector <long> a(n);
    stack <long> st;
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    int ans = 1;
    for(int i = 0 ; i < n ; ++i){
        if(st.empty()) st.push(a[i]);
        else{
            if(a[i] >= st.top()) st.push(a[i]);
            else{
                ans = max(ans, (int)Siz(st));
                // st.clear();
                stack <long> tmp;
                st = tmp;
                st.push(a[i]);
            }
        }
    }
    if(!st.empty()) ans = max(ans, (int)Siz(st));
    cout << ans;
    return 0;
}