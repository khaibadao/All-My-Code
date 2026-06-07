#include<bits/stdc++.h>
#define Siz(s) s.size()
#define Maxn 100001+4
using namespace std;

int n, S;
int a[Maxn], b[Maxn];
int f[Maxn];

int main(){
//	freopen("SumExpo.Inp", "r", stdin);
//  freopen("SumExpo.Out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> S;
	for(int i = 0 ; i < n ; ++i) cin >> a[i] >> b[i];
	for(int i = 0 ; i < n ; ++i){
        for(int j = S ; j >= 0 ; j--){
            if(j >= a[i]){
                f[j] = max(f[j], f[j - a[i]] + b[i]);
            }
        }
	}
	cout << f[S];
	return 0;
}

