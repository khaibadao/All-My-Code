#include<bits/stdc++.h>
using namespace std;
int prime[1000001];
void sang()
{
	for(int i = 0 ; i <= 1000000 ; ++i) prime[i] = 0;
	prime[0] = prime[1] = 0;
	for(int i = 2 ; i <= 1000 ; ++i){
		if(prime[i]){
			for(int j = i*i ; j <= 1000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long m, n, p, q; cin >> m >> n >> p >> q;
	long a, b, c, d; cin >> a >> b >> c >> d;
	pair <long, int> A = make_pair(min(a, n), min(d, p));
	cout << A.first << ' ' << A.second << '\n';
//	cout << td_x*td_y;
	return 0;
}
