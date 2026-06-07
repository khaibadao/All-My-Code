#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
void tach(long long n){
	vector < pair<long long, int>> pa;
	long res = 0;
	for(int i = 2 ; i <= sqrt(n) ; ++i){
		if(n%i == 0){
			long long tmp = n;
			while(n%i == 0){
				++res;
				n /= i;
			}
			pa.push_back({i, res});
			res = 0;
		}
	}
	if(n != 1){
		pa.push_back({n, 1});
	}
	cout << Siz(pa) << '\n';
	for(int i = 0 ; i < Siz(pa); ++i){
		cout << pa[i].first << ' ' << pa[i].second << '\n';
	}
//	cout << pa.size() << '\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n; cin >> n;
	tach(n);
	return 0;
}
