#include<bits/stdc++.h>
using namespace std;
bool check(long a){
	for(int i = 2; i <= sqrt(a); ++i){
		if(a%i == 0) return false;
	}
	return true;
}
int check1(long a){
	int so[4] = {1, 3, 7, 9};
	string s = to_string(a);
	for(int i = 0 ; i < 4 ; ++i){
		s += so[i] + '0';
		long long t = stoll(s);
		if(check(t)) return 1;
		else s.pop_back();
	}
	return 0;
}
int check2(long a){
	a/=
	while(a > 10){
		if(check(a)) a /= 10;
		else return 0;
	}
	return 1;
}
int main()
{
	int n; cin >> n;
	long a[n];
	map <long, int> mp;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		mp[a[i]] = 0;
	}
	for(int i = 0 ; i < n ; ++i){
		if(check(a[i]) && check1(a[i]) && check2(a[i])) mp[a[i]] = 1;
	}
	int t; cin >> t;
	while(t--){
		int l, r; cin >> l >> r;
		l -= 1, r -= 1;
		int cnt = 0;
		for(int i = l ; i <= r; ++i){
			if(mp[a[i]]) ++cnt;
		}
		cout << cnt << endl;
	}
	return 0;
}
