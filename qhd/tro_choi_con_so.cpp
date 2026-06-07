#include<bits/stdc++.h>
#define Mod 1000001
#define Siz(s) s.size()
using namespace std;

int main(){
//	freopen("game.inp", "r", stdin);
//	freopen("game.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		long long X, Y, N;
        cin >> X >> Y >> N;
        
        for (int i = 0; i < N; ++i) {
            X *= 2;
            Y *= 2;
        }
        
        long long W = X, Z = Y;
        long long max_val = max(W, Z);
        long long min_val = min(W, Z);
        
        cout << max_val / min_val << "\n";
	}
//	long long res = 0;
	return 0;
}
