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
    long long l, r; cin >> l >> r;
    long cnt = 0;
    long len = 1;
    while(l < r){
        int tmp = 1;
        long lf = l;
        int so = 2;
        while(lf*so <= r){
            ++tmp;
            lf *= so;
        }
        if(tmp > len){
            len = tmp;
            cnt = 0;
            ++cnt;
        }else if(tmp == len) ++cnt;
        else break;
        ++l;
    }
    cout << len << ' ' << cnt;
    return 0;
}