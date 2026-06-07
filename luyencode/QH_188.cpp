#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;


int main(){
	freopen("bai2.inp", "r", stdin);
	freopen("bai2.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k; cin >> n >> k;
	long b; cin >> b;
	long chi_so = b%n;
	vector <int> a(n + 1);
	long long sum = 0;
	long long ans = 0;
	for(int i = 1 ; i <= n ; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	if(k <= n){
		int res = 0;
//		cout << chi_so << ' ';
    	for(int i = chi_so ; i <= n ; ++i){
    		ans += a[i];
    		++res;
		}
        k -= res;
//        cout << k << ' '; 
        for(int i = 1 ; i <= k ; ++i){
        	ans += a[i];
		}
		return cout << ans, 0;
	}else
	{
		ans = (k/n)*sum;
		k %= n;
		for(int i = chi_so ; i <= k ; ++i) ans += a[i];
		cout << ans;
	}
	return 0;
}
