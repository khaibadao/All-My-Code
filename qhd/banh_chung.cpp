#include<bits/stdc++.h>
#define haha 1000001
using namespace std;
int v[haha], f[haha];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int S; cin >> S;
	for(int i = 1 ; i <= n ; ++i) cin >> v[i];
	for(int i = 1 ; i <= n ; ++i){
		for(int j = S ; j >= 0 ; j--){
			if(j >= i){
				f[j] = max(f[j - 1], f[j - i] + v[i]);
			}
		}
	}
	cout << f[S];
	return 0;
}
