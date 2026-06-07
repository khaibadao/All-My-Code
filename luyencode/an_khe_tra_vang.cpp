#include<bits/stdc++.h>
#define Siz(s) s.size()
#define haha 1000001
using namespace std;

int a[haha], v[haha], f[haha];
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, S; cin >> n >> S;
	for(int i = 0 ; i < n ; ++i) cin >> a[i] >> v[i];
	for(int i = 0 ; i < n ; ++i){
		for(int j = S ; j >= 0 ; j--){
			if(j >= a[i]){
				f[j] = max(f[j], f[j - a[i]] + v[i]);
			}
		}
	}
	cout << f[S];
	return 0;
}
