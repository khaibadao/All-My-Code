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

void doo(string &s, long long &t){
    long long sum = 0;
    for(int i = 0 ; i < Siz(s) ; ++i) sum += (s[i] - '0');
    s = to_string(sum/2);
    t = sum/2;
    // cout << sum/2 << " th2" << en;
    // cout << sum << en;
}
int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long n; cin >> n;
    if(n <= 5) return cout << n, 0;
    string s = to_string(n);
    long long so = 6;
    while(Siz(s) > 1 || so >= 6) doo(s, so);
    cout << s;
    return 0;
}