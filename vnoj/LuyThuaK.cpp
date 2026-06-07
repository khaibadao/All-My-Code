#include<bits/stdc++.h>
#define Maxn 1000001
#define Siz(s) s.size()
#define en '\n'
#define pb push_back
#define MOD 1000000007 

using namespace std;

vector <long long> a;

long n, k;
long long lt(int k, int so_mu){
    long long ans = 1;
    while(so_mu--){
        ans *= k;
    }
    return ans%MOD;
}

void sang()
{
    for(int i = 0 ; i <= 100 ; ++i){
        long long res = lt(k, i);
        if(res <= n) a.pb(res);
        else{
            a.pb(res);
            break;
        }
    }
}

long long ans = LLONG_MAX;
void ql(long long sum, int pos){
    if(sum >= n){
        ans = min(ans, sum);
        return;
    }
    if(pos >= Siz(a)) return;
    for(int i = pos ; i < Siz(a) ; ++i){
        ql(sum + a[i], i + 1);
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    sang();
    ql(0, 0);
    cout << ans%MOD;
    return 0;
}