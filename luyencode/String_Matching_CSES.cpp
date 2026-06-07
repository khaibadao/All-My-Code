#include <bits/stdc++.h>
// #define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005
#define pb push_back
#define mang 1000001


using namespace std;

const int base = 37;
const long long MOD = 1000000000+7;

long long POW[mang], hashA[mang];

typedef unordered_map<long long, long long> unmap;

long long get(int i, int j){
    return (hashA[j] - hashA[i - 1] * POW[j - i + 1] + MOD*MOD)%MOD;
}

int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string A, B; cin >> A >> B;

    int lenA = Siz(A), lenB = Siz(B);
    A = '&' + A;
    B = '^' + B;

    POW[0] = 1;
    for(int i = 1; i <= Siz(A) ; ++i){
        POW[i] = (POW[i - 1]*base)%MOD;
    }

    for(int i = 1 ; i <= lenA ; ++i){
        hashA[i] = (hashA[i - 1]*base + (A[i] - 'a' + 1))%MOD;
    }

    long long hashB = 0;
    for(int i = 1 ; i <= lenB ; ++i){
        hashB = (hashB*base + (B[i] - 'a' + 1))%MOD;
    }

    // int ans = 0;
    for(int i = 1 ; i <= lenA - lenB + 1 ; ++i){
        if(get(i, i + lenB - 1) == hashB) cout << i << ' ';
    }

    // cout << ans;
    return 0;
}