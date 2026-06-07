#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("TRONGCAY.INP", "r", stdin);
	freopen("TRONGCAY.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map <int, int> mp;
	int dem = 0;
	int a, b, k; cin >> a >> b >> k;
	while(a%k != 0) ++a;
//	cout << a << ' ';
	while(a < b){
		++mp[a];
		a += k;
//		cout << a << ' ';
		++dem;
	}
	if(a == b){
		++mp[a]; ++dem;
	}
	int x, y, c;
	cin >> x >> y >> c;
	while(x%c != 0) ++x;
//	cout << '\n' << x << ' ';
	while(x < y){
		if(!mp[x]){
			++mp[x];
//			cout << x << ' ';
			++dem;
		}
		x += c;
	}
	if(x == y && !mp[x]) ++dem;
//	cout << '\n';
	cout << dem;
	return 0;
}
