#include<bits/stdc++.h>
#define haha 1000001
int f[haha] = {0};
int v[haha];
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int S; cin >> S;
	for(int i = 1 ; i <= n ; ++i) cin >> v[i];
	for(int i = 1 ; i <= n ; ++i){
		for(int j = S ; j >= 0 ; j--){
			if(j >= v[i])
			   f[j] = max(f[j], f[j - v[i]] + v[i]);
		}
	}
	cout << f[S];
	return 0;
}
