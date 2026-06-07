#include<bits/stdc++.h>
#define Siz(x) x.size()

bool check(long long n){
	if(n < 2) return false;
	if(n < 4) return true;
	if(n%2 == 0 || n % 3 == 0) return false;
	for(long i = 6 ; i*i <= n ; i += 5){
		if(n%i == 0 || n%(i + 2) == 0) return false;
	}
	return true;
}
using namespace std;
int main()
{
	freopen("bai3.inp", "r", stdin);
	freopen("bai3.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		vector <long long> sum;
		vector <long long> sup;
		long long so; cin >> so;
		if(check(so)){
			cout << '0' << '\n';
			continue;
		}
		for(int i = 1 ; i <= sqrt(so) ; ++i){
			if(so%i == 0){
				if(i != so/i){
					sum.push_back(i + so/i);
		    		sup.push_back(abs(so/i - i));
				}
			}
		}
		sort(sum.begin(), sum.end());
		bool check = false;
		for(int i = 0 ; i < Siz(sup) ; ++i){
			auto it = lower_bound(sum.begin(), sum.end(), sup[i]);
			if(*it == sup[i]){
				cout << 1 << '\n';
				check = true;
			}
			if(check == true) break;
		}
		if(!check) cout << 0 << '\n';
	}
	return 0;
}
