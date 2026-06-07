#include<bits/stdc++.h>
using namespace std;

int a[101][101];
int n, m; 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	int cot; cin >> cot;
	cot -= 1;
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < m ; ++j){
			cin >> a[j][i];
		}
	}
	sort(a[cot], a[cot] + n);
	for(int i = 0 ; i < n ; ++i){
		for(int j  = 0 ; j < m ; ++j){
			cout << a[j][i] << ' ';
		}
		cout << '\n';s
	}
	return 0;
}
