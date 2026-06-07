#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

vector <int> v;
int n_fake = 2;
void sang()
{
	int cnt = -1;
	v.push_back(4), v.push_back(7);
	while(Siz(v) <= 100000){
		long long a1 = v[++cnt]*10 + 4;
		long long a2 = v[cnt]*10 + 7;
		v.push_back(a1);
		v.push_back(a2);
	}
//	int so_luong_ptu = 0;
//	int ans = 0;
//	v.push_back(4), v.push_back(7);
//	int cnt = 1;
//	long check1 = 2,check2 = pow(2, ++cnt);
//	while(n_fake <= 100000){
//		long t1 = 0, t2 = check2/2;
//		int size = Siz(v);
//		while(t1 < t2){
//			long long s1 = v[Siz(v) - check1]*10 + 4;
//			long long s2 = v[Siz(v) - check1]*10 + 7;
//			v.push_back(s1); v.push_back(s2);
//			n_fake += 2;
//			t1 += 2;
//		}
//		while(t2 < check2){
//			long long s1 = v[Siz(v) - t1 - 1]*10 + 4;
//			long long s2 = v[Siz(v) - t1 - 1]*10 + 7;
//			so_luong_ptu += 2;
//			v.push_back(s1); v.push_back(s2);
//			n_fake += 2;
//			t2 += 2;
//		}
//		check1 = check2;
//		check2 = pow(2, ++cnt);
//		if(ans < 2){
//			long long s1 = v[Siz(v) - so_luong_ptu]*10 + 4;
//			long long s2 = v[Siz(v) - so_luong_ptu]*10 + 7;
//			so_luong_ptu += 2;
//			ans += 2;
//			v.push_back(s1); v.push_back(s2);
//			n_fake += 2;
//		}else
//		{
//			long long s1 = v[Siz(v) - so_luong_ptu + 1]*10 + 4;
//			long long s2 = v[Siz(v) - so_luong_ptu + 1]*10 + 7;
//			so_luong_ptu += 2;
//			ans = 0;
//			v.push_back(s1); v.push_back(s2);
//			n_fake += 2;
//		}
}



int main()
{
	freopen("FindN.inp", "r", stdin);
	freopen("FindN.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sang();
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		cout << v[x - 1] << '\n';
	}
	return 0;
}
