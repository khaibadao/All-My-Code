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

string xau_cp = "";
void doo(){
    for(int i = 1 ; i <= 1000 ; ++i){
        string so = to_string(i*i);
        if(Siz(xau_cp) + Siz(so) <= 1000000){
            xau_cp += so;
        }else break;
    }
}
int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long k; cin >> k;
    doo();
    if(k <= 10000000) cout << xau_cp[k - 1];
    return 0;
}