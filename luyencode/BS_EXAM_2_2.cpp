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

vector <string> a; // khai bảo mảng vector 

void sang(){
    int gt = 1000000;
    int cs = 0;
    a.pb("6"), a.pb("8");
    for(int i = 0 ; i <= 15 ; ++i){
        string tmp1 = a[i] + "6";
        string tmp2 = a[i] + "8";
        a.pb(tmp1);
        a.pb(tmp2);

        cout << "Th i = " << i << ": ";
        for(int j = 0 ; j < Siz(a) ; ++j){
            cout << a[j] << ' ';
        }
        cout << en;
    }
}

int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    sang();

    // cout << a[n - 1];

    return 0;
}