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
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    priority_queue <long> qe1; // dùng để lưu max
    priority_queue <long, vector <long>, greater <long>> qe2; // dùng để lưu min
    int ans = 1;
    for(int i = 0 ; i < n ; ++i){
        qe1.push(a[i]); qe2.push(a[i]);
        long x = qe1.top(), y = qe2.top();
        // if()
    }
    return 0;
}