#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

bool check(double res){
    double so = (int)res;
    if(res - so == 0.0) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    long long res = (double)n*(n + 1)/2;
    if(res%2 != 0) return cout << "NO", 0;
    else
    {
        res /= 2;
        cout << "YES" << '\n';
        unordered_map <int, int> maa;
        long long ans = res;
        for(int i = 1 ; i <= n ; ++i){
            ++maa[i];
        }
        vector <int> so1, so2;
        for(int i = n ; i >= 1 ; i--){
            if(maa[i] && ans >= i){
                so1.push_back(i);
                ans -= i;
                maa[i] = 0;
            }
            if(ans == 0) break;
        }
        for(int i = n ; i >= 1 ; i--){
            if(maa[i]){
                so2.push_back(i);
            }
        }
        if(Siz(so1) > Siz(so2)){
            cout << Siz(so1) << '\n';
            for(int i = 0 ; i < Siz(so1) ; ++i) cout << so1[i] << ' ';
            cout << '\n';
            cout << Siz(so2) << '\n';
            for(int i = 0 ; i < Siz(so2) ; ++i) cout << so2[i] << ' ';
        }else
        {
            cout << Siz(so2) << '\n';
            for(int i = 0 ; i < Siz(so2) ; ++i) cout << so2[i] << ' ';
            cout << '\n';
            cout << Siz(so1) << '\n';
            for(int i = 0 ; i < Siz(so1) ; ++i) cout << so1[i] << ' ';
        }
    }
    return 0;
}
