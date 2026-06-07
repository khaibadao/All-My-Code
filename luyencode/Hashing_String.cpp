#include <bits/stdc++.h>
// #define MOD 1000000003
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005
#define pb push_back
#define mang 1000001


using namespace std;

typedef unordered_map<long long, long long> unmap;

const long long MOD = 1000000007;
long long POW[mang], hashP[mang];

long long get(int i, int j){
    return (hashP[j] - hashP[i - 1] * POW[j - i + 1] + MOD * MOD)%MOD;
}

const int base = 31;

int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string P, T; cin >> P >> T; // P là văn bản, T là xâu con

    POW[0] = 1;
    
    P = '%' + P;
    T = '*' + T;
    int lenP = Siz(P) - 1, lenT = Siz(T) - 1;


    for(int i = 1 ; i <= lenP ; ++i){
        POW[i] = (POW[i - 1]*base)%MOD;
    }

    for(int i = 1 ; i <= lenP ; ++i){
        hashP[i] = (hashP[i - 1]*base + (P[i] - 'a' + 1))%MOD;
    }

    long long hashT = 0;
    for(int i = 1 ; i <= lenT ; ++i){
        hashT = (hashT * base + (T[i] - 'a' + 1))%MOD;
    }

    for(int i = 1 ; i <= lenP - lenT + 1 ; ++i){
        if(hashT == get(i, i + lenT - 1)) cout << i << ' ';
    }

    // cout << lenT << ' ' << lenP << en;


    return 0;
}