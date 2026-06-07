#include<bits/stdc++.h>
using namespace std;


int so_luong_ptu = 0;
//int so_luot = 2 + pow(res, so_mu);
void sang()
{
	int so_luong_ptu = 0;vector <long long> v(0);
	int ans = 0;
	v.push_back(4), v.push_back(7);
	so_luong_ptu += 2;
	int n_fake = 2;
	while(n_fake <= 100000){
		if(ans < 2){
			string xau1 = to_string(v[so_luong_ptu - 2]) + '4';
			string xau2 = to_string(v[so_luong_ptu - 2]) + '7';
//			cout << xau1 << ' ' << xau2 << '\n';
			so_luong_ptu += 2;
			ans += 2;
			long long s1 = stoll(xau1);
			long long s2 = stoll(xau2);
			v.push_back(s1); v.push_back(s2);
			n_fake += 2;
		}else
		{
			string xau1 = to_string(v[so_luong_ptu - 1]) + '4';
			string xau2 = to_string(v[so_luong_ptu - 1]) + '7';
			so_luong_ptu += 2;
			ans = 0;
			long long s1 = stoll(xau1);
			long long s2 = stoll(xau2);
			v.push_back(s1); v.push_back(s2);
			n_fake += 2;
		}
	}
}
int main(){
//	freopen("FindN.inp", "r", stdin);
//	freopen("FindN.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sang();
	int k; cin >> k;
	cout << v[k - 1];
	return 0;
}
