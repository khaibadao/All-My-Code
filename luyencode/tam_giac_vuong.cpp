#include<bits/stdc++.h>
#define Siz(n) n.size()
using namespace std;

bool check(double n){
	int so = (int)n;
	if(so - n == 0) return true;
	return false;
}

int main()
{
	freopen("TGV.INP", "r", stdin);
	freopen("TGV.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map <long long, int> mp;
	long long x, y, z, n; cin >> x >> y >> z >> n;
	int ans = 0;
	long long x1 = x, y1 = y, z1 = z;
	vector <long long> a(0);
	for(int i = 0 ; i < n ; ++i){
		x += i, y += i, z += i;
		a.push_back(x), a.push_back(y), a.push_back(z);
		++mp[x], ++mp[y], ++mp[z];
		x = x1, y = y1, z = z1;
	}
	int i = 0, j = 1;
//	for(int i = 0 ; i < Siz(a) ; ++i) cout << a[i] << ' ';
//	cout << '\n';
	while(i < Siz(a) && j < Siz(a)){
//		cout << a[i] << ' ' << a[j] << ' ' <<  hypot(a[i], a[j]) << '\n';
		if(mp[hypot(a[i], a[j])] && check(hypot(a[i], a[j]))){
//			cout << a[i] << ' ' << a[j] << ' ' << hypot(a[i], a[j]) << '\n';
			++ans;
//			--mp[a[i]], --mp[a[j]], --mp[hypot(a[i], a[j])];
		}
		if(j == Siz(a) - 1){
			++i; j = i;
		}else ++j;
	}
	cout << ans;
	return 0;
}
