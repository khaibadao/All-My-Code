#include<bits/stdc++.h>
#define Siz(s) s.size()

using namespace std;

int chap(int n, int k){
	if(k == 0 || k == n) return 1;
	return chap(n - 1, k - 1) + chap(n - 1, k);
}

long long res = 0;
unordered_map <int, int> maa;

void cap(vector <int> &a){
	for(const auto &it : maa){
		int kq = it.second;
		if(kq > 1){
			long long tmp = chap(kq, 2);
			res += tmp;
		}
	}
}

int main()
{
	freopen("LONGK.inp", "r", stdin);
	freopen("LONGK.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	vector <int> a(n);
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		++maa[a[i]];
	}
	cap(a);
	
	for(int i = 0 ; i < n ; ++i){
		if(maa[a[i]] > 1){
			cout << res - maa[a[i]] + 1 << '\n';
		}else cout << res << '\n';
	}
	return 0;
}
