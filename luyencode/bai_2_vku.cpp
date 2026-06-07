#include<bits/stdc++.h>
using namespace std;
long w[1000001], v[1000001], c[1000001];
long long L[1000001]; int n; long S;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> n >> S;
	for(int i = 1 ; i <= n ; ++i) cin >> w[i] >> v[i] >> c[i];
	for(int i = 1 ; i <= n ; ++i){
		for(int j = S; j >= 0 ; j--){
			if(j >= w[i]){
				L[j] = max(L[j], L[j - w[i]] + v[i]);
			}
		}
	}
	cout << L[S];
	return 0;
}
