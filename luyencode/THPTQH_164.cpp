#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

void tach(long n){
	long res = n;
	vector <pair <int, int>> paa;
	for(int i = 2 ; i <= sqrt(n) ; ++i){
		if(n%i == 0){
			int res = 0;
			while(n%i == 0){
				++res;
				 n/= i;
			}
			paa.push_back({i, res});
		}
	}
	if(n != 1 && !Siz(paa)){
		cout << res;
		return;
	}else if(n != 1) paa.push_back({n, 1});
	if(Siz(paa) == 1){
		int so = paa[0].first, mu = paa[0].second;
		int sl = 1;
		while(sl < mu){
			long long pop = so*so;
			if(pop%res == 0){
				cout << so;
				break;
			}else
			{
				++sl;
				so *= sl;
			}
		}
	}
	else
	{
		long long ans = 1;
		for(int i = 0 ; i < Siz(paa) ; ++i){
			ans += paa[i].first;
		}
		cout << ans;
	}
}


int main()
{
//    freopen("power.INP", "r", stdin);
//	freopen("power.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long n; cin >> n;
	tach(n);
	return 0;
}
