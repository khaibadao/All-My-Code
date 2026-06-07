#include<bits/stdc++.h>
using namespace std;
long long a[100000][100000];
int dem[100000];
map <long long, int> mp;
void sang(){
	for(int i = 1 ; i <= 100000 ; ++i) dem[i] = 0;
	memset(a, 1, sizeof(a));
	for(int i = 1 ; i <= 100000 ; ++i){
		for(int j = 1 ; j <= 100000 ; ++j){
			a[i][j] = i * j;
			++dem[a[i][j]];
		}
	}
}
int main()
{
	int t; cin >> t;
	cout << t;
	sang();
	while(t--){
		memset(dem, 0, sizeof(dem));
		int n; cin >> n;
		long x; cin >> x;
		cout << dem[x];
	}
	return 0;
}
